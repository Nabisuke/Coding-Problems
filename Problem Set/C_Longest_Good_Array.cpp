#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long k = 0;
        while (l + (k * (k + 1)) / 2 <= r)
        {
            k++;
        }
        cout << k << endl;
    }
    return 0;
}
