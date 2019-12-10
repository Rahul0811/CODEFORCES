#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[],int size)
{
    for(int i = 0;i < size;i++)
    {
        for(int j = i + 1;j < size;j++)
        {
            if(arr[i] > arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
}

int search_max(int arr[],int size,int a)
{
    int i = 0;
    for(i = 0;i < size;i++)
    {
        if(arr[i] == a)
        break;
    }
    return i;
}

int search_min(int arr[],int size,int a)
{
    int t = size - 1;
    int i = t;
    for(i = t;i >= 0;i--)
    {
        if(arr[i] == a)
        break;
    }
    return i;
}


int main()
{
    int arr[100],t;
    cin>>t;
    int arr1[t];
    for(int i = 0;i < t;i++)
    {
        cin>>arr[i];
    }
    for(int j = 0;j < t;j++)
    {
        arr1[j] = arr[j];
    }
    sort(arr1,t);
    int a = arr1[0];
    int b = arr1[t-1];
    int n1 = search_min(arr,t,a);
    int n2 = search_max(arr,t,b);
    if(n1 > n2)
    cout<<(t - n1 + n2 - 1);
    else
    cout<<(t - n1 + n2 - 2);
}