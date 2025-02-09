#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if (a > 1) cout<<a-1<<"\n";
        else
        {
            if (b == 2) cout<<3<<"\n";
            else cout<<2<<"\n";
        }
    }
    
    return 0;
}