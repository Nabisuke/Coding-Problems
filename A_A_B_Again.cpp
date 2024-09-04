#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;

        int first_digit = n % 10;
        n = n / 10;
        int second_digit = n;
        sum = first_digit + second_digit;
        cout<<sum<<endl;
    }
    return 0;
}