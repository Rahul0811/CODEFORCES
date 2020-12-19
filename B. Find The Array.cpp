// Problem: B. Find The Array
// Contest: Codeforces - Educational Codeforces Round 100 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1463/B
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
  		int a[n],b[n],c[n];
  		fi(i,n)
  		{
  			cin>>a[i];
  			b[i] = a[i];
  			c[i] = a[i];
  		}
  		fi(i,n)
  		{
  			if(i%2 == 0)
  			a[i] = 1;
  			else b[i] = 1;
  		}
  		int s1 = 0,s2 = 0;
  		fi(i,n)
  		{
  			s1 += dif(a[i],c[i]);
  		}
  		fi(i,n)
  		{
  			s2 += dif(b[i],c[i]);
  		}
  		if(s1 < s2)
  		fi(i,n)cout<<a[i]<<" ";
  		else fi(i,n)cout<<b[i]<<" ";
  		cout<<endl;
  	}
	return 0;
}
