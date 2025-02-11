#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char,int> mp;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = i;
            }
            else
            {
                if ((i - mp[s[i]]) % 2 != 0)
                {
                    flag = false;
                    break;                    
                }
                else
                {
                    mp[s[i]] = i;
                }
            }
        }
        if (flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}