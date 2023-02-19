#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull MOD = 1E9 +7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ull a,n;
		cin>>a>>n;
		ull sum=1;
		while(n)
		{
			if(n%2==1)
			{
				sum *= a;
				sum %= MOD;
			}
			a *= a;
			a %= MOD;
			n/=2;
		}
		cout<<sum<<endl;
	}
}