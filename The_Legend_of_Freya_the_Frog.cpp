#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,d;
        cin>>x>>y>>d;
        pair<int, int> pr = {x, y};
        pair<int, int> pr_1 = {0, 0};
        int count = 0;

        while (pr.first != pr_1.first || pr.second != pr_1.second)
        {
            count++;

            if (count % 2 != 0)
            {
                int move_x = min(d, pr.first - pr_1.first);
                pr_1.first += move_x;
            }
            else
            {
                int move_y = min(d, pr.second - pr_1.second);
                pr_1.second += move_y;
            }
        }
        cout << count << endl;
    }

    return 0;
}
