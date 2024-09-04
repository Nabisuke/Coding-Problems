#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;   
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == '#') {
                    v.push_back(j + 1);
                    break;
                }
            }
        }
        reverse(v.begin(),v.end());
        
        for (int val : v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
