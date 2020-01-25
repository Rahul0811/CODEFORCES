#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
	for(int i = 0;i < size;i++)
	{
		for(int j = i;j < size ;j++)
		{
			if(arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
/*
bool sum(int arr[],int index,int size) 
{
	int suml = 0,sumr = 0;
	for(int i = 0;i < index;i++)
	{
		suml = suml + arr[i];
	}
	for(int i = index;i < size;i++)
	{
		sumr = sumr + arr[i];
	}
	if(suml > sumr)
	return true;
	else return false;
}*/

int main()
{
	int n;
	cin>>n;
	int arr[n],gross_sum = 0,net_sum = 0;
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i];
		gross_sum = gross_sum + arr[i];
	}	
	sort(arr,n);
	int i;
	for(i = 0;i < n;i++)
	{
		net_sum = net_sum + arr[i];
		int dif = gross_sum - net_sum;
		if(net_sum > dif)
		break;
	}
	cout<<(i + 1);
	return 0;
}
 