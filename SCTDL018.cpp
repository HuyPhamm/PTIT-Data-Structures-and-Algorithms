#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[10000];
		queue<int> qu;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			qu.push(a[i]);
		}
		cout<<"[";
		for(int i=0;i<n;i++)
		{
			if(i==n-1)
				cout<<a[i]<<"]"<<endl;
			else
				cout<<a[i]<<" ";
		}
		int sum=0;
		int test=n;
		while(test--)
			sum+=test;
		test=0;
		int cnt=0;
		int count=n;
		while(!qu.empty())
		{
			a[test]=qu.front();
			qu.pop();
			a[test]+=qu.front();
			qu.push(a[test]);
			test++;
			cnt++;
			if(cnt==n-1)
			{
				qu.pop();
				n--;
				cnt=0;
			}
			if(test==sum)
				break;
		}
		cnt=count-1;
		int check=0;
		for(int i=0;i<test;i++)
		{
			if(check==0)
				cout<<"[";
			check++;
			if(check==cnt)
			{
				check=0;
				cnt--;
				cout<<a[i]<<"]"<<endl;
			}
			else
				cout<<a[i]<<" ";	
		}
	}
}
