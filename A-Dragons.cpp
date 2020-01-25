#include<bits/stdc++.h>
using namespace std;

void sort(int arr[][2],int size)
{
	for(int i = 0;i < size;i ++)
	{
		for(int j = i + 1;j < size;j++)
		{
			if(arr[i][0] > arr[j][0])
			{
				int temp1 = arr[i][0];
				arr[i][0] = arr[j][0];
				arr[j][0] = temp1;
				
				int temp2 = arr[i][1];
				arr[i][1] = arr[j][1];
				arr[j][1] = temp2;
			}
		}
	}
}

int main()
{
	int n,s;
	cin>>s>>n;
	int arr[n][2];
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}	
	sort(arr,n);
	for(int i = 0;i < n;i++)
	{
		if(s <= arr[i][0])
		{
			break;
		}
		else
		{
			s = s + arr[i][1];
		}
	}
	if(s > arr[n - 1][0])
	cout<<"YES";
	else cout<<"NO";
	return 0;
}
 