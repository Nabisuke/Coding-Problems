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
        vector<int> v(n);
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if (i == n-1) ans+=v[i];
        }
        v[n-1] = INT_MIN;
        int max_val = *max_element(v.begin(), v.end());
        cout<<ans + max_val<<"\n";
    }
    
    return 0;
}