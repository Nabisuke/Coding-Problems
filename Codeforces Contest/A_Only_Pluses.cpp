#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if ((v[0] < v[1] and v[1] < v[2]))
        {
            cout<<(v[0]+3)*(v[1]+2)*(v[2])<<"\n";
        }
        else if (v[0] < v[1] and v[1] == v[2])
        {
            cout<<(v[0]+5)*v[1]*v[2]<<"\n";
        }
        else if ((v[0] == v[1] and v[1] == v[2]) or (v[0] == v[1] and v[1] < v[2]))
        {
            cout<<(v[0]+2)*(v[1]+2)*(v[2]+1)<<"\n";
        }
    }
    
    return 0;
}