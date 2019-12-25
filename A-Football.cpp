#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string arr[t];
    for(int i = 0;i < t;i++)
    {
        cin >> arr[i];
    }
    string a,b;
    for(int j = 0;j < t;j++)
    {
        if(arr[j] != arr[0])
        {   
            b = arr[j];
            break;
        }
    }
    a = arr[0];
    int g1 = 0,g2 = 0;
    for(int j = 0;j < t;j++)
    {
        if(arr[j] == a)
        g1++;
        else
        g2++;
    }
    if(g1>g2)
    cout<<a;
    else
    cout<<b;   
}