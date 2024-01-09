#include <bits/stdc++.h>
#define int long long
using namespace std;
#define ll long long
ll pw[20];
// pw={1,10,100,1000,10000,...}
void solve()
{
	ll n;
	cin>>n;  // let n=19
	ll g=9,p=0;
	while(n>g)
	{
		n-=g; // The moment n<g loop terminates
		p++; // for n=19, p=1
		g=9*pw[p]*(p+1); //g=180
	}
	ll a=(n-1)/(p+1); // here n is now 10 as 19-9=10; a=9/2=4
	ll b=(n-1)%(p+1); //9%2=1
	ll num=pw[p]+a;  // num=14
	
	string s=to_string(num);
	cout<<s[b]<<endl; // s[1]=4
	    


}

signed main()   
{
	pw[0]=1;
	for(int i=1; i<=18; i++)
	pw[i]=pw[i-1]*10LL;
	int T = 1;
	cin >> T;
	while (T--)solve();
	
}
