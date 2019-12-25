#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
    int i,j,k;

    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1],R[n2];

    for(i = 0;i < n1;i++)
    {
        L[i] = arr[l + i];
    }

    for(j = 0;j < n2;j++)
    {
        R[j] = arr[m + j + 1];
    }
    i = 0,j = 0,k = l;

   while((i < n1) && (j < n2))
   {
       if(L[i] <= R[j])
       {
           arr[k] = L[i];
           i = i + 1;
       }
       else
       {
           arr[k] = R[j];
           j = j + 1;
       }  
       k = k + 1;
   }
    while(i < n1)
    {
        arr[k] = L[i];
        i = i + 1;
        k = k + 1;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j = j + 1;
        k = k + 1;
    }
}


void merge_sort(int arr[],int l,int r)
{
    if(l < r)
    {
        int m = l + (r - l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m + 1,r);
        merge(arr,l,m,r);
    }
}

void print_array(int arr[],int size)
{
    for(int i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    merge_sort(arr,0,n - 1);
    long long int a = arr[0];
    long long int b = arr[n - 1];
    long long int p = 0,q = 0;
    long long int c = 0,m = n - 1;
    while(arr[c] == a)
    {
        p++;
        c++;
    }
    while(arr[m] == b)
    {
        q++;
        m--;
    }
    long long int d = arr[n - 1] - arr[0];
    long long int f;
    if(a != b)
    {
        f = (p * q);
    }
    else 
    {
        f = (p)*(p - 1)/2;
    }
    cout<<d<<" "<<f<<endl;
    return 0;
}