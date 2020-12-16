// Problem: C. Unique Number
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// URL: https://codeforces.com/contest/1462/problem/C
// Memory Limit: 256 MB
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
  		if(n > 45)
  		cout<<-1<<endl;
  		else
  		{
  			bool num[9];
  			fi(i,9)num[i] = 0;
  			int k = 9;
  			while(n > 0)
  			{
  				if(n >= k)
  				{
	  				n = n - k;
	  				num[k - 1] = true;
	  				k--;
  				}
  				else
  				{
  					num[n - 1] = true;
  					n = n - n;
  				}
  			}
  			fi(i,9)
  			{
  				if(num[i] == 1)
  				cout<<i + 1;
  			}
  			cout<<endl;
  		}
  	}
	return 0;
}
