#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
    int i,j;
    for(int i = 0;i  < size;i++)
    {
        for(int j = i + 1;j < size;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n;
    int girls[n];
    for(int i = 0;i < n;i++)
    {
        cin>>girls[i];
    }
    cin>>m;
    int boys[m];
    for(int i = 0;i < m;i++)
    {
        cin>>boys[i];
    }
    int count = 0;
    sort(girls,n);
    sort(boys,m);
    int k = 0;
    int i = 0,j = 0;
    while((i < n)&&(j < m))
    {
        if(girls[i] > boys[j] + 1)
        j++;
        if((girls[i] == boys[j] - 1)||(girls[i] == boys[j])||(girls[i] == boys[j] + 1))
        {
            i++;
            j++;
            count++;
        }
        if(girls[i] < boys[j] - 1)
        i++;
    }
    cout<<count;
    return 0;
}