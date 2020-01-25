#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[3],d,j;
	cin>>arr[0]>>arr[1]>>arr[2]>>d;
	sort(arr,arr + 3);
	if(arr[1] - arr[0] < d)
	j = j + (d - arr[1] + arr[0]);
	if(arr[2] - arr[1] < d)
	j = j + (d - arr[2] + arr[1]);
	cout<<j;
	return 0;
}
 