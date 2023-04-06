#include <bits/stdc++.h>
using namespace std;

int longestPalSubstr(string str)
{
	int n = str.size();
	int maxLength = 1, start = 0;
	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			int flag = 1;

			for (int k = 0; k < (j - i + 1) / 2; k++)
				if (str[i + k] != str[j - k])
					flag = 0;

			if (flag && (j - i + 1) > maxLength) {
				start = i;
				maxLength = j - i + 1;
			}
		}
	}
	return maxLength;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << longestPalSubstr(str) <<endl;
	}
}