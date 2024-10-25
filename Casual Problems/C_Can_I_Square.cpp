#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        ll total = 0;  
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            total += v[i];
        }
        ll digit = sqrt(total);
        if (digit*digit == total) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}