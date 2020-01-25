#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][2];
	
	for(int i = 0;i < n;i++)
	cin>>arr[i][0]>>arr[i][1];
	
	int i = 0;
	while(i < n - 1)
	{
		int j = 0;
		if(arr[i][1] < arr[i + 1][1])
		{
			int temp = arr[i][1];
			arr[i + 1][1] = temp;
		}
		i++;
	}
	
	int sum = 0;
	for(int i = 0;i < n;i++)
	sum = sum + arr[i][0]*arr[i][1];
	
	cout<<sum;
	return 0;
}
 