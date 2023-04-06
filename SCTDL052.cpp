#include<bits/stdc++.h>
using namespace std;

int convertDemical(string n,int k)
{
	long long sum=0;
	for(int i=0;i<n.length();i++)
		sum+=((n[i]-'0')*pow(k,(n.size()-i-1)));
	return sum;
}
void convertfinal(int n,int k)
{
	if(n==0)
		cout<<0;
	stack<int> st;
	while(n!=0)
	{
		st.push(n%k);
		n/=k;
	}
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
}
	
int main()	
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		string a,b;
		cin>>a>>b;
		int sum=convertDemical(a,k)+convertDemical(b,k);
		convertfinal(sum,k);
		cout<<endl;
	}
}