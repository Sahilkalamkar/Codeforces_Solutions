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

bool isPal(string s){
    int ptr1=0;
    int ptr2=s.length()-1;
    while(ptr1<ptr2){
        if(s[ptr1]!=s[ptr2])
            return false;
        ptr1++;
        ptr2--;
    }
    return true;
}
void solver(){
    string s;
    cin>>s;
    if(isPal(s)){
        cout<<0<<ENDL;
        ret;
    }
    else if(s[0]==s[2]){
        cout<<2<<ENDL;
        cout<<"R 2"<<ENDL;
        ll nl=s.length()+s.length()-2;
        cout<<"R "<<nl-1<<ENDL;
        ret;
    }
    else{
        ll len=s.length();
        cout<<3<<ENDL;
        cout<<"L 2"<<ENDL;
        len++;
        cout<<"R 2"<<ENDL;
        ll nl=len+len-2;
        cout<<"R "<<nl-1<<ENDL;
        ret;
    }
    ret;
}

MAIN1
