#include<bits/stdc++.h>
using namespace std;

int n,k,check;
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
		cin>>n>>k;
		ktao();
		check=1;
		while(check!=0)
		{
			for(int i=1;i<=k;i++)
				cout<<a[i];
			sinh();
			cout<<" ";
		}
		cout<<endl;
	}
}