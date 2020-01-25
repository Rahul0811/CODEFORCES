#include<bits/stdc++.h>
using namespace std;

/*
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
}*/

int main()
{
	int n,m;
	cin>>n>>m;
	int i = 0;
	while(n > 0 && m > 0)
	{
		n--;
		m--;
		i++;
	}
	if(i%2 == 1)
	cout<<"Akshat";
	else cout<<"Malvika";
	return 0;
}