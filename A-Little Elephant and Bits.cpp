#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i = 0,k = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '0' && k == 0)
		{
			k = 1;	
		} 
		else if(s[i + 1] == '\0' && k == 0)
		{
			break;
		}
		else
		{
			cout<<s[i];
		}
		i++;
	}
	return 0;
}
 