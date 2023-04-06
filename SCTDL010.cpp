#include <bits/stdc++.h>

using namespace std;
int n, a[100], check;
void khoitao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 1;
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 0)
    {
        a[i] = 1;
        i--;
    }
    if (i == 0)
        check = 0;
    else
        a[i] = 0;
}
bool ktra()
{
    int cnt1 = 0;
    int cnt0 =0;
    for (int i = 1; i <= n; i++)
    {
        if(a[i]==0)
        	cnt0++;
        if(a[i]==1)
        	cnt1++;
    }
    if (cnt1==cnt0)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check = 1;
        khoitao();
        if(n%2==1 || n==0)
        {
            cout <<-1<<endl;
            continue;
        }
        while (check != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (ktra())
                    cout << a[i];
            }
            if (ktra())
                cout << " ";
            sinh();
        }
        cout<<endl;
    }
}