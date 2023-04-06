#include<bits/stdc++.h>
using namespace std;
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
		int check=0;
		for(int i=0;i<n;i++)
		{
			check=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					check=1;
					cout<< a[j]<<" ";
					break;
				}
			}
			if(check!=1)
				cout<<-1<<" ";
		}
		cout<<endl;
	}
	
}