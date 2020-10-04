#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define mod 1000000007

void inp()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
} 
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
    ll n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    	cin>>v[i];
    }

    sort(v.begin(),v.end());


    if(k==0)
    {
    	if(v[0]-1<=0)
    	{
    		cout<<"-1"<<endl;
    	}  
    	else{
    		cout<<v[0]-1<<endl;
    	}
    }
    else if(v[k]==v[k-1])
    {
    	cout<<"-1"<<endl;
    }
    else
    {
    	cout<<v[k-1]<<endl;
    }


    return 0;
}