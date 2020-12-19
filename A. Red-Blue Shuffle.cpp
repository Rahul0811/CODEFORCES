// Problem: A. Red-Blue Shuffle
// Contest: Codeforces - Codeforces Round #691 (Div. 2)
// URL: https://codeforces.com/contest/1459/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define mod 1000000007
#define inf 1e18
#define setbits(x) __builtin_popcount(x)
#define zrbits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define fi(i,n) for(int i = 0;i < n;i++)
#define fd(i,n) for(int i = n;i >= 0;i--)
int dif(int a,int b){if(a > b)return a - b;else return b - a;}
int gcd(int a, int b){if(b == 0)return a;return gcd(b, a%b);}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
  	int t;
  	cin>>t;
  	while(t--)
  	{
  		int n;
  		cin>>n;
  		string s1,s2;
  		cin>>s1>>s2;
  		int a = 0,b = 0;
  		for(int i = 0;i < n;i++)
  		{
  			if(s1[i] - '0' > s2[i] - '0')
  			a++;
  			else if(s1[i] - '0' < s2[i] - '0')
  			b++;
  			else
  			{
  				a++;
  				b++;
  			}
  		}
  		if(a > b)
  		cout<<"RED"<<endl;
  		else if(a < b)
  		cout<<"BLUE"<<endl;
  		else cout<<"EQUAL"<<endl;
  	}
	return 0;
}
