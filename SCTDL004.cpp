#include <bits/stdc++.h>
 
using namespace std;
int n,check;
string a[100];
void khoitao()
{
	for(int i=1;i<=n;i++)
		a[i]='A';
}
void sinh() 
{
	int i=n;
	while(i>=1 && a[i]=="B")
	{
		a[i]='A';
		i--;
	}
	if(i==0)
		check=0;
	else
		a[i]='B';
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
		cin>>n;
		check=1;
		khoitao();
		while(check!=0)
		{
			for(int i=1;i<=n;i++)
				cout<<a[i];
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
}