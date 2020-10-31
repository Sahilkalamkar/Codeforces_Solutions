
#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
#define fast         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF          1e18
#define MOD          1000000007
#define Vi           vector<ll> 
#define Vs           vector<string>
#define VI           vector<vector<ll> >
#define PII          pair<ll,ll> 
#define PSI          pair<string,ll>
#define PB           push_back


int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int DX[] = {0,-1,-1,-1,0,1,1,1};
int DY[] = {-1,-1,0,1,1,1,0,-1};

ll sum(ll n)
{
	ll s = 0;
	while(n)
	{
		s += n%10;
		n/=10;
	}
	return s;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
    	ll n,s;
    	cin >> n >> s;
    	if(sum(n)<=s )
    		cout << 0 << '\n';
    	else{
    		ll p = 1;
    		ll ans = 0;
    		for(int i=0;i<19;i++)
    		{
    			ll dig = (n/p)%10;
    			ll add = ((10-dig)%10) * p;
    			ans += add;
    			n += add;
    			if( sum(n)<=s )
    				break;
    			p*=10;
    		}
    		cout << ans << '\n';
    	}
    }
}
