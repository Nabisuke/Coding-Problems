#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s; cin>>s;
        string r = s;        
        reverse(r.begin(),r.end());
        bool flag = false;
        bool all_characters_same_or_not = true;
        for (int i = 0; i <n; i++)
        {
            if (s[i] != s[0])
            {
                all_characters_same_or_not = false;
                break;
            }
        }
        if (s == r)
        {
            if (k > 0 && !all_characters_same_or_not)
            {
                cout<<"YES"<<"\n";
                continue;
            }
            else
            {
                cout<<"NO"<<"\n";
                continue;
            }
            
        }
        else if (s < r)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] > r[i])
                {
                    if (k > 0)
                    {
                        s[i] = r[i];
                        k--;
                        flag = true;
                        break;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
    
    return 0;
}