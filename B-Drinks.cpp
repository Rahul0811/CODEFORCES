#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0;i < t;i++)
    {
        cin>>arr[i];
    }
    double j = 0;
    for(int i = 0;i < t;i++)
    {
        j = j + arr[i];
    }
    double k;
    k = j/t;
    cout<<fixed<<setprecision(15)<<k;
    return 0;
}