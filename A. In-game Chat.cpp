// Problem: A. In-game Chat
// Contest: Codeforces - Codeforces Round #692 (Div. 2, based on Technocup 2021 Elimination Round 3)
// URL: https://codeforces.com/contest/1465/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  		string s;
  		cin>>s;
  		int l = s.length() - 1;
  		int k = 0;
  		while(s[l] == ')')
  		{
  			k++;
  			l--;
  			if(l < 0)
  			break;
  		}
  		if(k > n - k)
  		cout<<"Yes"<<endl;
  		else cout<<"No"<<endl;
  	}
	return 0;
}
