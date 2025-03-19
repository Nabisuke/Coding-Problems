#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        string s;
        for (int i = 0; i < m; i++)
        {
            s.push_back('B');
        }
        for (int i = 0; i < n; i++)
        {
            int val = m+1 - v[i];
            if (val < v[i])
            {
                if (s[val-1] == 'A')
                {
                    s[v[i]-1] = 'A';
                }
                else
                {
                    s[val-1] = 'A';
                }
            }
            else
            {
                if (s[v[i]-1] == 'A')
                {
                    s[val-1] = 'A';
                }
                else
                {
                    s[v[i]-1] = 'A';
                }

            }
        }
        cout<<s<<"\n";
    }
    
    return 0;
}