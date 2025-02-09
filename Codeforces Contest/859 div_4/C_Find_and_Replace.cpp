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
        string s; cin>>s;
        vector<int> v(26);
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        int odd = 0, even = 0;
        for(int i=0;i<26;i++)
        {
            if(v[i]%2==0) even+=v[i];
            else odd+=v[i];
        }
        if (n == 1) cout<<"YES"<<"\n";
        else if (n % 2 == 0)
        {
            if (even > odd) cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }
        else
        {
            if (even >= odd) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    
    return 0;
}