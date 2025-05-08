#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());
        if (mx == mn)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        else
        {
            cout<<"YES"<<"\n";
            for (int i=0;i<n;i++)
            {
                if (v[i] == mx) cout<<1+1<<" \n"[i+1==n];
                else cout<<1+0<<" \n"[i+1==n];
            }
        }
    }
    return 0;
}