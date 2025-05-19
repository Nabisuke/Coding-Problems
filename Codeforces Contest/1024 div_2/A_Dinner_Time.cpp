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
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        int val = n / p;
        int val_1 = n % p;
        if (val_1 == 0)
        {
            if (m == val*q) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else cout<<"YES"<<"\n";
    }
    return 0;
}