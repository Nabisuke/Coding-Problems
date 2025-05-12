#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(int w, int k, int i)
{
    if (w == 0)
        return 0;
    return i*k + sum(w-1, k, i+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;
    ll w;
    cin>>k>>n>>w;
    ll total = sum(w, k, 1);
    if (total > n)
        cout<<total - n<<"\n";
    else
        cout<<0<<"\n";
    return 0;
}