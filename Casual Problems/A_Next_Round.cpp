#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,pos,cnt = 0;
    cin>>t>>pos;
    vector<int>v(t);
    for (int i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    int barrier = v[pos-1];
    for (auto it : v)
    {
        if (it >= barrier && it > 0)
        {
            cnt += 1;
        }
    }
    cout<<cnt;   
    return 0;
}