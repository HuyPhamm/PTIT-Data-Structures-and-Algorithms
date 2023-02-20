#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull; 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ull n;cin>>n;
		ull a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		long long max=a[0];
		long long sum=0;
		ull test=0;
		for(ull i=0;i<n;i++)
		{
	 		test=i;
			while(1)
	 		{
	 			sum+=a[test];
				if(max<sum)
					max=sum;
				if(test==n-1)
					break;
				test++;	
			}
			sum=0;
		}
		cout<<max<<endl;
	}
}