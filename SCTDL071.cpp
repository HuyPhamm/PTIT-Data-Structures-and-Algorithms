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
		memset(a,0,sizeof(a));
		int test;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			cout<<a[n-i-1]<<" "<<a[i]<<" ";
			if(n-i-1==n/2 && n%2==0)
				break;
			if(i==n/2-1 && n%2 !=0)
			{
				cout<<a[i+1]<<" ";
				break;
			}
		}
		cout<<endl;
	}
}