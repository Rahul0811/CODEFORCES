#include<bits/stdc++.h>
using namespace std;

int ceil(int a,int b)
{
	if(a % b == 0)
	return a/b;
	else return (a/b + 1);
}

int main()
{
	int t;
	cin>>t;
	while(t > 0)
	{
		int a,b,i;
		cin>>a>>b;
		if(a < b)
		{
			for(i = 1;i < a;i++)
			{
				if((i + ceil(b,i + 1)) <= a)
				{
					cout<<"YES"<<endl;
					break;
				}
			}
			if(i > a - 1)
			cout<<"NO"<<endl;
		}
		if(a >= b)
		cout<<"YES"<<endl;
		t--;
	}
	return 0;
}
