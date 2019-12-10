#include<bits/stdc++.h>
using namespace std;

int difference(int i)
{
    if(i >= 2)
    return (i-2);
    else return (2 - i);
}

int main()
{
    int arr[25];
    int a = 0;
    for(int i = 0;i < 25;i++)
    {
        cin>>arr[i];
        if(arr[i]!=0)
        break;
        a++;
    }
    cout<<(difference((a/5)) + difference((a%5)));
    return 0;
}