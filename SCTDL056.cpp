#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		long long sum1=0,sum2=0;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]=='1')
				sum1+=(long long)pow(2,(s1.size()-1-i));
		}
		for(int i=0;i<s2.size();i++)
		{
			if(s2[i]=='1')
				sum2+=(long long)pow(2,(s2.size()-1-i));
		}
		cout<<sum1*sum2<<endl;
	}
}