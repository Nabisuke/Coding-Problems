#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int cop = 0;
    int crime_untreated = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];        
        if (v[i] == -1)
        {
            if (cop > 0) cop--;
            else crime_untreated++;
        } 
        else 
        {
            cop += v[i];
        }
    }
    cout<<crime_untreated<<endl;
    return 0;
}