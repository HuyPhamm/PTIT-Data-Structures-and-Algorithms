#include<bits/stdc++.h>
using namespace std;

int n,k,s,check;
int a[100];

void ktao()
{
	for(int i=1;i<=k;i++)
		a[i]=i;
}
void sinh()
{
	int i=k;
	while(i>=1 && a[i]==n-k+i)
		i--;
	if(i==0)
		check=0;
	else
	{
		a[i]++;
		for(int j=i+1;j<=k;j++)
			a[j]=a[j-1]+1;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>s;
		ktao();
		check=1;
		int cnt=0;
		int arr[n];
		for(int i=1;i<=n;i++)
			cin>>arr[i];
		int sum=0;
		while(check!=0)
		{
			for(int i=1;i<=k;i++)
				sum+=arr[a[i]];
			if(sum==s)
				cnt++;
			sum=0;
			sinh();
		}
		cout<<cnt<<endl;
	}
}