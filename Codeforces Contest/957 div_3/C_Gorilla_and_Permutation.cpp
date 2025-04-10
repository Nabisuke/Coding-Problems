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
        int n,m,k;
        cin>>n>>m>>k;
        for (int i = 0; i < n; i++)
        {
            if (n-i > m)
            {
                cout<<n-i<<" ";
            }
            if (n-i == m) break;
        }
        for (int i = 1; i <= m; i++)
        {
            if (i < m) cout<<m-(m-i)<<" ";
            else cout<<m-(m-m)<<"\n";          
        }
    }
    
    return 0;
}