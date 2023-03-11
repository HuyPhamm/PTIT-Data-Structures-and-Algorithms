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
		stack<char> st;
		st.push(s[0]);
		for(int i=1;i<s.size();i++)
		{
			if(s[i]=='(' || s[i]=='[' || s[i] == '{')
				st.push(s[i]);
			if(s[i]==')' && st.top()=='(')
				st.pop();
			if(s[i]=='}' && st.top()=='{')
				st.pop();
			if(s[i]==']'&& st.top()=='[')
				st.pop();
			//cout<<st.size()<<" ";
		}
		
		if(st.empty())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
}