#include <iostream>
#include <vector>
using namespace std;
//----------------------------------------------------------------
//RECURSIVE METHOD

// class Solution {
// public:
//     int countPaths(int m, int n, int i, int j){
//         if((i==m-1) && (j==n-1)) return 1;
//         if((i >= m) || (j >= n)) return 0;
//         else return countPaths(m, n, i+1, j)  + countPaths(m, n, i, j+1);
//     }
//     int uniquePaths(int m, int n) {
//         int i = 0, j = 0;
//         return countPaths(m, n, i, j);
//     }
// };

// int main(){
//     Solution obj;
//     int m = 3, n = 2;
//     cout << obj.uniquePaths(m , n);
//     return 0;
// }
//----------------------------------------------------------------
//DYNAMIC PROGRAMMING & MEMOIZATION

//To convert recursive program to dynamic programming, initiate a matrix dp[i][j] with all values as -1
//we need to store the answer - countPaths(m, n, i+1, j)  + countPaths(m, n, i, j+1) in dp matrix
//and check after every iteration if dp[i][j] != -1 then return stored result.

class Solution {
public:
    int countPaths(int m, int n, int i, int j, vector<vector<int> > &dp){
        if((i==m-1) && (j==n-1)) return 1;
        if((i >= m) || (j >= n)) return 0;
        if(dp[i][j] != -1) return dp[i][j]; //Memoization
        else return dp[i][j] = countPaths(m, n, i+1, j, dp)  + countPaths(m, n, i, j+1, dp);
    }
    int uniquePaths(int m, int n) {
        int i = 0, j = 0;
        vector<vector<int> > dp(m, vector<int>(n, -1));
        return countPaths(m, n, i, j, dp);
    }
};

int main(){
    Solution obj;
    int m = 3, n = 2;
    cout << obj.uniquePaths(m , n);
    return 0;
}