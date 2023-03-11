#include<bits/stdc++.h>
using namespace std;
int main()
{
   	int t;
   	cin>>t;
   	while(t--)
   	{
   		int n,m;
		cin>>n>>m;
		int matrix[n][m];
   		for (int i = 0; i < n; i++) 
		{
        	for (int j = 0; j < m; j++) 
            	cin >> matrix[i][j];    	
    	}
    	int result = 0 ;
    	int dp[n][m+2];
    	memset(dp, 0, sizeof(dp));
    	for (int i = 0 ; i < m ; i++)
        	dp[0][i+1] = matrix[0][i];
   	 	for (int i = 1 ; i < n ; i++)
        	for (int j = 1 ; j <= m ; j++)
            	dp[i][j] = max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1])) +matrix[i][j-1] ;
    	for (int i=0; i<=m; i++)
        	result = max(result, dp[n-1][i]);
    	
		cout << result<<endl;				
	}
}