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
		int count=0;
		double sum=0;
		int i=1;
		vector<int> result;
		while(1)
		{
			sum+=log10(i);
			if(ceil(sum)==n)
			{
				count++;
				result.push_back(i);
				continue;
			}
			if(ceil(sum)<n)
				i++;
			if(ceil(sum)>n)
				break;
		}
		if(count==0)
			cout<<"NO"<<endl;
		else
		{
			cout<<count<<" ";
			for(int i=0;i<result.size();i++)
			{
				cout<<result[i]<<" ";
			}
			cout<<endl;
		}
		
	}
}