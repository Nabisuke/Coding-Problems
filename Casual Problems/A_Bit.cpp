#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int result = 0;
    while(t--)
    {
        string s = "";
        cin>>s;
        if (s == "X++" || s == "++X")
        {
            result++;
        }
        else
        {
            result--;
        }
    }
    cout<<result<<endl;
    return 0;
}