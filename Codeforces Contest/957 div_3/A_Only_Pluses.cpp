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
        int rem = 5;
        while(rem !=0)
        {
            sort(v.begin(),v.end());
            v[0]++;
            rem--;
        }
        cout<<v[0]*v[1]*v[2]<<"\n";
    }
    
    return 0;
}