#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        vector<ll> a(4);
        for (int i = 0; i < 4; i++)
        {
            cin>>a[i];
        }
        set<ll> s;
        s.insert(a[3] - a[2]);
        s.insert(a[2] - a[1]);
        s.insert(a[0] + a[1]);

        cout<<4 - s.size()<<'\n';
        
    }
    return 0;
}