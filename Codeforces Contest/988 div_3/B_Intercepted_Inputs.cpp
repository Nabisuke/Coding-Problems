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
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int nn = 0;
        int m=0;
        bool flag = false;
        while(!flag)
        {
            for (int i = 0; i < n-1; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (v[i] * v[j] == n-2)
                    {
                        nn = v[i], m = v[j];
                        flag = true;
                        break;                 
                    }
                }
            }
        }
        
        cout<<nn<<" "<<m<<"\n";

    }
    
    return 0;
}