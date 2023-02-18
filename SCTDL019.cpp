#include<bits/stdc++.h>
using namespace std;

int a[100];

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int count=0;
		do
		{
			count++;
			if(count==2)
				break;
		}
		while(next_permutation(a,a+n));
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}