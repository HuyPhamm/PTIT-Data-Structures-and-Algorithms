#include <bits/stdc++.h>
using namespace std;
 

int grayConvert(int n) 
{
	return n ^ (n >> 1); 
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
    	int n;cin>>n;
    	cout<<grayConvert(n)<< endl;
	}
 
    return 0;
}