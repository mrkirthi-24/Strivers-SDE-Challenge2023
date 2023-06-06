#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ptriangle(n);
  for(int i=0; i<n; i++){
    ptriangle[i].resize(i+1, 1);
    for(int j=1; j<i; j++){
      ptriangle[i][j] = ptriangle[i-1][j-1] + ptriangle[i-1][j];
    }
  }
  return ptriangle;
}
