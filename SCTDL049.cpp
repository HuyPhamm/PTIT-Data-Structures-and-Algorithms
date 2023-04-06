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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int check=0;
		int result=0;
		for(int i=0;i<n;i++)
		{
			if(k==a[i])
			{
				check=1;
				result=i+1;
				break;
			}
		}
		if(check==1)
			cout<<result<<endl;
		else
			cout<<"NO"<<endl;
	}
}