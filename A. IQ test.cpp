#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int e = 0,o = 0,e1,o1;
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i];
	}
	for(int i = 0;i < n;i++)
	{
		if(arr[i] % 2 == 0)
		{
			if(e == 0)
			e1 = i;
			
			e++;
		}
		else
		{
			if(o == 0)
			o1 = i;
			
			o++;
		}
		if((e >= 2)&&(o == 1))
		{
			cout<<(o1 + 1);
			break;
		}
		if((o >= 2)&&(e == 1))
		{
			cout<<(e1 + 1);
			break;
		}
	}
	return 0;
}
