#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_set>
#include <queue>
#include <deque>
#include <set>
#include <iomanip> 
#include <stack>
#define dbg(x) cout <<#x<<":"<<x<<'\n';
#define dbg2(x,y) cout<<#x<<":"<<x<<' '<<#y<<":"<<y<<'\n';
#define eps 1e-7l
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds; 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; //container.find_by_order(i)  gives iterator i-th elem
#define int long long
#define ld long double

int power(int x,int y){int res = 1;while(y>0){if(y&1)res = (res*x);x = (x*x);y = y>>1;}return res;}
int power(int x,int y, int md){int res = 1;x%=md;while(y>0){if(y&1)res = (res*x)%md;x = (x*x)%md;y = y>>1;}return res%md;}

int n,l,da,db,md,nd,m;

int const dpn=4e2+25;
std::vector<int> c(dpn);
int dp[dpn][dpn];

bool comp(pair<int,int> l,pair<int,int> r){
	if(l.first!=r.first)
		return (l.first>r.first);
	return l.second<r.second;
}

int hl(int t,int i){
	if(i>=n)
		return 0;
	if(t>=2*n+20)
		return 1e10;
	if(dp[t][i]!=-1)
		return dp[t][i];
	return dp[t][i]=min(hl(t+1,i),abs(t-c[i])+hl(t+1,i+1));
}

int32_t main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		sort(begin(c),begin(c)+n);
		memset(dp,-1,sizeof dp);
		cout<<hl(1,0)<<endl;
	}
	return 0;
}
