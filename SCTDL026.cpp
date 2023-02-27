#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		ull sum=1;
		int count=0;
		int i=1;
		for(i=1;i<=20;i++)
		{
			sum*=i;
			s=to_string(sum);
		}
		cout<<sum<<endl;
		cout<<s.size();
		//cout<<count<<" "<<i-1<<endl;
	}
}