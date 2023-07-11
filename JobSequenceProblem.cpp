//TC = O(NLOGN) + O(N*M)
//SC = O(N)

#include <bits/stdc++.h> 

bool comparator(vector<int>v1, vector<int>v2){
    return (v1[1] > v2[1] || (v1[1] == v2[1] && v1[0] >= v2[0]));
}

int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(), jobs.end(), comparator);
    int maxD = -1, profit = 0;
    for(int i=0; i<jobs.size(); i++)
        maxD = max(maxD, jobs[i][0]);
    
    vector<int> dp(maxD+1, -1);
    for(int i=0; i<jobs.size(); i++){
        int d = jobs[i][0];
        for(int j=d; j>0; j--){
            if(dp[j] == -1){
                dp[j] = jobs[i][1];
                break;
            }
        }
    }
    for(int i=1; i<=maxD; i++){
        if(dp[i] != -1) profit += dp[i];
    }
    return profit;
}
