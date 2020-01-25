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
	string s,fin;
	cin>>s;
	fin = "hello";
	int i = 0,j = 0;
	while(s[i] != '\0')
	{
		if(s[i] == fin[j])
		{
			j++;
			if(j == 5)
			{
				cout<<"YES";
				return 0;
			}
		}
		i++;
	}
	cout<<"NO";
	return 0;
}
 