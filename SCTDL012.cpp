#include <bits/stdc++.h>
using namespace std;
#define MAX_COUNT 10000
vector<string> vec;
void generate()
{  
    queue<string> q;
    q.push("9");
    for (int count = MAX_COUNT; count > 0; count--)
    {
        string s1 = q.front();
        q.pop();

        vec.push_back(s1);
         
        string s2 = s1;
         
        q.push(s1.append("0"));

        q.push(s2.append("9"));
    }
}

string find(int n)
{  

    for (int i = 0; i < vec.size(); i++)
 
        if (stoi(vec[i])%n == 0)
            return vec[i];       
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
		generate();   
	    int n;
		cin>>n; 
	    cout << find(n)<<endl;   
	}
}