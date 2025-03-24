#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for (auto x : v) cin>>x;
    vector<pair<int,int>> result;

    int mid = n / 2;
    int r = n;
    bool right_zero = false;
    for (int i = mid; i < n; i++)
    {
        if (v[i] == 0)
        {
            right_zero = true;
            break;
        }
    }
    if (right_zero)
    {
        result.emplace_back(mid + 1, n);
        r -= (n - mid - 1);
    }
    bool left_zero = false;
    for (int i = 0; i < mid; i++)
    {
        if (v[i] == 0)
        {
            left_zero = true;
            break;
        }
    }
    if (left_zero)
    {
        result.emplace_back(1, mid);
        r -= (mid - 1);
    }
    result.emplace_back(1, r);
    cout<<result.size()<<'\n';
    for (auto p : result)
    {
        cout<<p.first<<' '<<p.second<<'\n';
    }
}

int main()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}