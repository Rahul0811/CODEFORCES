#include<bits/stdc++.h>
using namespace std;

int diff(int a,int b,int c)
{
	if(a >= b && a >= c)
	return (a - b + a - c);
		
	if(b >= a && b >= c)
	return (b - a + b - c);
	
	if(c >= a && c >= b)
	return (c - a + c - b);
}

int main()
{
	int t;
	cin>>t;
	while(t > 0)
	{
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		if(n >= diff(a,b,c) && (n - diff(a,b,c))%3 == 0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
 