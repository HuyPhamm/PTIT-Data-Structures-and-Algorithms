#include<bits/stdc++.h>
using namespace std;
long long MOD= 1E9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			sum %= MOD;
			sum += (a[i]*i);
		}
		cout<<sum<<endl;
	}
}