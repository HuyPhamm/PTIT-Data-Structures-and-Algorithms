#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		string s;
		cin>>s;
		int vitri;
		int a[100];
		for(int i=0;i<s.length();i++)
			a[i]=s[i]-'0';
		int max=a[0];
		for(int i=0;i<k;i++)
		{
			for(int j=i;j<s.length();j++)
			{
				if(max<a[j])
				{
					max=a[j];
					vitri=j;
				}
			}
			max=a[i];
			swap(a[i],a[vitri]);
		}
		for(int i=0;i<s.length();i++)
			cout<<a[i];
		cout<<endl;
	}
}