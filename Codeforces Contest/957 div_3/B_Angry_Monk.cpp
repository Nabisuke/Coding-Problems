#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        int k;
        cin>>n>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll total = 0;
        for (int i=0;i<k-1;i++)
        {
            if (v[i] < 2)
            {
                total++;
            }
            else
            {
                total += (v[i] - 1)+ v[i];
            }
        }
        cout<<total<<"\n";

    }
    
    return 0;
}