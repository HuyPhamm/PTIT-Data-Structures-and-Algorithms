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
		sort(a,a+n);
		int sum=0;
		int cnt=0;
		int test=n-1;
		while(test--)
		{
			sum+=(a[cnt]+a[cnt+1]);
			int temp=a[cnt]+a[cnt+1];
			a[cnt+1]=temp;
			cnt++;
			sort(a+cnt,a+n);
		}
		cout<<sum<<endl;
	}
}