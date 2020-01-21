#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int j,k;
	
	if(n%a == 0)
	j = n/a;
	else j = n/a + 1;
	
	if(m % a == 0)
	k = m/a;
	else k = m/a + 1;
	
	long long int fin = j * k;
	cout<<fin;
	return 0;
}
