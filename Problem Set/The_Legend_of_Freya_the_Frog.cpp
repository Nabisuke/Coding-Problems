#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,d;
        cin>>x>>y>>d;
        pair<int, int> pr_1 = {0, 0};
        int count = 0;

        while (pr_1.first != x || pr_1.second != y)
        {
            count++;

            if (count % 2 != 0)
            {
                int move_x = min(d, x - pr_1.first);
                pr_1.first += move_x;
            }
            else
            {
                int move_y = min(d, y - pr_1.second);
                pr_1.second += move_y;
            }
        }
        cout << count << endl;
    }

    return 0;
}
