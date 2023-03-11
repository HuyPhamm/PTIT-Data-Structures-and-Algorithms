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
		int a[n],b[m];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		int S[m+n];
		int cnt=0;
		for(int i=0;i<m+n;i++)
		{
			if(i<n)
				S[i]=a[i];
			else
			{
				S[i]=b[cnt];
				cnt++;
			}
		}
		sort(S,S+m+n);
		int check;
		for(int i=0;i<m+n;i++)
		{
			if(check!=S[i])
			{
				cout<<S[i]<<" ";
				check = S[i];
			}
			else
				continue;
		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
					cout<<a[i]<<" ";
				else
					continue;
			}
		}
		cout<<endl;
	}
}