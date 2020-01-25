#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i = 0;i < n;i++)
	cin>>arr[i];
	
	sort(arr,arr + n);
	
	int i = 0,sum = 0;
	while(arr[i] < 0 && k > 0)
	{
		sum = sum + arr[i];
		i++;
		k--;
	}
	
	cout<<(sum *(-1));
	return 0;
}
 