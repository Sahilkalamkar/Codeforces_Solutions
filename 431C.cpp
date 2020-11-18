#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
 
ll dp[100][2];
 
int min(int a, int b){
	if(a<b) return a;
	else return b;
}
 
ll solve(ll n, ll k, ll d){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=min(i,k);j++){
			if(j<d){
				dp[i][0] += dp[i-j][0];
				dp[i][0]%=MOD;
 
				dp[i][1] += dp[i-j][1];
				dp[i][1]%=MOD;
			}
			else{
				dp[i][1] += dp[i-j][0];
				dp[i][1]%=MOD;
				dp[i][1] += dp[i-j][1];
				dp[i][1]%=MOD;
			}
		}
	}
	return dp[n][1];
}
 
int main(){
	// Initialise values
	dp[0][0] = 1; //No restrictions
	dp[0][1] = 0; //Initially impossible
 
	ll n,k,d;
	cin>>n>>k>>d;
	cout<<solve(n,k,d)<<"\n";
}
