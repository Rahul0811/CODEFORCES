#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    int i = 0;
	int b=1,c;
	for(int i=0;i<n;i++)
	{
	    for(int j=b;j<n;j++)
	    {
	        if(arr[i]>arr[j])
	        {
	            c=arr[i];
	            arr[i]=arr[j];
	            arr[j]=c;
	        }
	    }
	    b++;
	}
    while(i < n)
    {
        if(arr[i] != (i + 1))
        break;
        else
        i++;
    }
    cout<<(i + 1);
    return 0;
}