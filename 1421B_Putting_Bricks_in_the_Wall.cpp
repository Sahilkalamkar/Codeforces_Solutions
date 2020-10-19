/*                             
    WAKE THE FUCK UP SAMURAI, WE HAVE A CITY TO BURN
*/

#define _USE_MATH_DEFINES
#include <bits/stdc++.h> 
#include <cmath>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef long double ld;
typedef pair<int,int> pi;
typedef uint64_t i64;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vector<ll>> v2ll;
const int MOD = 1e9+7;
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAIN int main(){FAST_IO;ll tc;cin>>tc;while(tc--){solver();}ret0;}
#define MAIN1 int main(){FAST_IO;solver();ret0;}
#define rep(i,b,e) for(__typeof(e)i=(b)-((b)>(e));i!=(e)-((b)>(e));i+=1-2*((b)>(e)))
#define repa(i,x)  for(auto i:x)
#define vin(x) for(auto &i:x){cin>>i;}
#define vin1(x) for(ll i=1;i<x.size();i++){cin>>x[i];}
#define dbg(x) for(auto i:x){cout<<i<<" ";}cout<<ENDL;
#define ENDL "\n"
#define VALL(a) a.begin(),a.end()
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define MP(a,b) make_pair(a,b)
#define ff first
#define ss second
#define ret0 return 0;
#define ret return;
#define ms(a,v) memset(a,v,sizeof(a));
#define pb(x) push_back(x)
/*----------------------------*/

void solver(){
    int n;
    cin>>n;
    char grid[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>grid[i][j];

    if(grid[1][0]==grid[0][1] && grid[n-2][n-1]==grid[n-1][n-2] && grid[1][0]!=grid[n-2][n-1]){
        cout<<0<<ENDL;
        ret;
    }
    else if(grid[1][0]==grid[0][1] && grid[n-2][n-1]!=grid[n-1][n-2]){
        cout<<1<<ENDL;
        if(grid[1][0]==grid[n-1][n-2])
            cout<<n<<" "<<n-1<<ENDL;
        else
            cout<<n-1<<" "<<n<<ENDL;
        ret;
    }
    else if(grid[1][0]!=grid[0][1] && grid[n-2][n-1]==grid[n-1][n-2]){
        cout<<1<<ENDL;
        if(grid[1][0]==grid[n-1][n-2])
            cout<<2<<" "<<1<<ENDL;
        else
            cout<<1<<" "<<2<<ENDL;
        ret;
    }
    else if(grid[1][0]!=grid[0][1] && grid[n-2][n-1]!=grid[n-1][n-2]){
        cout<<2<<ENDL;
        if(grid[1][0]!=grid[n-2][n-1]){
            cout<<2<<" "<<1<<ENDL;
            cout<<n-1<<" "<<n<<ENDL;
        }
        else{
            cout<<2<<" "<<1<<ENDL;
            cout<<n<<" "<<n-1<<ENDL;
        }
        ret;
    }
    else{
        cout<<2<<ENDL;
        cout<<1<<" "<<2<<ENDL;
        cout<<2<<" "<<1<<ENDL;
        ret;
    }
    ret;
}

MAIN
