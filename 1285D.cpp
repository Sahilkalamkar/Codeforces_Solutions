#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define mod 1000000007
#define int long long
#define vi vector<int>

int solve(int ind,vi &v){
	if(ind==-1) return 0;
	vi on,off;
	int n = v.size();
	int msk = 1ll<<ind;
	for(int i=0;i<n;i++){
		if(v[i]&msk)
			on.pb(v[i]);
		else
			off.pb(v[i]);
	}
	if(on.size()==0)
		return solve(ind-1,off);
	if(off.size()==0)
		return solve(ind-1,on);
	
	int q1 = solve(ind-1,on);
	int q2 = solve(ind-1,off);
	return msk+ min(q1,q2);
}
signed main(){
	fast;
	int n;cin>>n;
	vi v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<solve(30,v);
	
}
