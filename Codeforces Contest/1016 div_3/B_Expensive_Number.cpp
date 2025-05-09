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
        string s;
        cin>>s;
        int n = s.size();
        bool flag = false;
        int zero_cnt = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                flag = true;
            }
            else if (flag) zero_cnt++;
        }
        cout<<n-(zero_cnt+1)<<"\n";
    }
    return 0;
}