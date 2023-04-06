#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[1000];
		memset(a,0,sizeof(a));
		int res=0;
		for(int i=0;i<s.size();i++)
		{
			a[s[i]]++;
			if(res<a[s[i]])
				res=a[s[i]];
		}
		if(res < s.size() - res && s.size()%2==0)
			cout<<1<<endl;
		else if(res <= (s.size()/2+1) && s.size() % 2 == 1)
			cout<<1<<endl;
		else
			cout<<-1<<endl;
	}
}