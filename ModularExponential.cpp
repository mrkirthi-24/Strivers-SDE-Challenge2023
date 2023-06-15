#include <bits/stdc++.h>  

//T(O)= O(N/2) S(O)= O(1)

int modularExponentiation(int x, int n, int m) 
{    
	int ans = 1;    
	while(n>0)    
	{        
		if(n&1)        
		{            
			ans = ( 1LL * (ans) * (x)%m)%m;        
		}        
		x = ( 1LL * (x)%m * (x)%m)%m;        
		n = n>>1; //Right shift operator --divide by 2^1
	}    
	return ans; 
}