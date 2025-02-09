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
        int a[n];
        int cnt = 0;
        int ans = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
            else
            {
                ans = max(cnt, ans);
                cnt = 0;
            }
        }
        cout<<max(cnt,ans)<<endl;
    }
    
    return 0;
}