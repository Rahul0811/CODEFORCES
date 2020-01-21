#include<bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
	if(n==1)
	return false;
	
	for(int i=2;i*i<=n;i++)
	if(n%i==0)
	return false;
	
	return true;
}

int main()
{
	long long int nt,arr;
	cin>>nt;
	for(long long int i = 0;i < nt;i++)
	{
		cin>>arr;
		long long int k = pow(arr,0.5);
		if(k*k == arr && prime(k))
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}