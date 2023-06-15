// #include <bits/stdc++.h>
//My solution
// pair<int,int> missingAndRepeating(vector<int> &arr, int n)
// {
// 	pair<int, int> p;
// 	int asum = n*(n+1)/2, bsum = 0;
// 	sort(arr.begin(), arr.end());
// 	for(int i=0; i<n-1; i++){
// 		if(arr[i] == arr[i+1]){
// 			p.second = arr[i]; //repeat number R
// 		}
// 	}
// 	for(int i=0; i<n; i++){
// 		bsum += arr[i];	
// 	}
// 	int x = abs(bsum - p.second);
// 	p.first = asum - x; //missing number M
// 	return p;
// }

#include <bits/stdc++.h>
//Solution from discussion
pair<int,int> missingAndRepeating(vector<int> &arr, int n) { 
	vector<int>check(n+1, 0);    
	for(int i=0; i<n; i++){        
		check[arr[i]]++;
	}        
	pair<int, int>ans;    
	for(int i=1; i<=n; i++){        
		if(check[i]==0)  
		ans.first=i; //missing number M       
		if(check[i]>1) 
		ans.second=i; //repeat number R 
	}    
	return ans; 
}  