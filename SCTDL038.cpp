#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		cin>>x>>y;
		string x1=x;
		string y1=y;
		string x2=x;
		string y2=y;
		for(int i=0;i<x.size();i++)
		{
			if(x[i]=='5')
				x1[i]='3';
			if(x[i]=='3')
				x2[i]='5';
		}
		for(int i=0;i<y.size();i++)
		{
			if(y[i]=='5')
				y1[i]='3';
			if(y[i]=='3')
				y2[i]='5';
		}
		cout<<stoi(x1)+stoi(y1)<<" ";
		cout<<stoi(x2)+stoi(y2)<<endl;
	}
}