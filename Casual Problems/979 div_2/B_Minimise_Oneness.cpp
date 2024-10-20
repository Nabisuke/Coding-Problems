#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s += '0';
            }
            else
            {
                s += '1';
            }
        }
        cout<<s<<endl;
    }      
    
    return 0;
}
