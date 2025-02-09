#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        string s = "codeforces";
        string n; cin>>n;
        int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != n[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}