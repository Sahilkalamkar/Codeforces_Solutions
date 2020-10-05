
/*
 * Author : Akansha
 * 4/10/20
 *
 */
#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define mod 1000000007

 
ll min(ll a,ll b)
{
    if(a<b)
        return a;
    else
        return b;
}
 
ll max(ll a,ll b)
{
    if(a>b)
        return a;
    else
        return b;
}
 
int main() {
    fio;
    ll t;
    cin >> t;
    while (t--) {

      ll n;
      cin>>n;
      vector<ll> v(n);
      for(ll i=0;i<n;i++)
      {
        cin>>v[i];
      }

      ll ans=0;
      for(int i=0;i<n-1;i++)
      {
        ans+=max(v[i]-v[i+1],0);
      }
     cout<<ans<<endl;
    }
    return 0;
}