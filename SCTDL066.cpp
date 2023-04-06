#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+5]={0};
		long long MOD =1E9+7;
		a[0]=a[1]=1;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=min(i,k);j++)
			{
				a[i]+=a[i-j];
				a[i]%=MOD;	
			}
		}
		cout<<a[n]<<endl;
	}
}