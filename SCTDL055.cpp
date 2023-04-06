#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int MOD=1E9+7;
		int n;
		cin>>n;
		unsigned int a[100000];
		memset(a,0,sizeof(a));
		a[0]=0;
		a[1]=1;
		for(int i=2;i<=n;i++)
			a[i]+=(a[i-1]+a[i-2])%MOD;
		cout<<a[n]<<endl;
	}
}