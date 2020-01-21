#include<bits/stdc++.h>
using namespace std;

int cubes_required(int n)
{
	if(n == 1)
	return 1;
	
	if(n == 2)
	return 3;
	
	int t = cubes_required(n - 1) + n;
	return t; 
}

int main()
{
	int n,i = 0;
	cin>>n;
	int sum = 0;
	while(sum < n)
	{
		i++;
		sum = sum + cubes_required(i);
	}
	if(sum == n)
	cout<<i;
	else
	cout<<i - 1;
	return 0;
}