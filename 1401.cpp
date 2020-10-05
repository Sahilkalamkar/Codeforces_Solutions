
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
    inp();
    fio;
    ll t;
    cin >> t;
    while (t--) {

    	ll n;
    	cin>>n;
    	vector<int> v(n),a(n);
    	ll min_ele=INT_MAX;
 
    	for(int i=0;i<n;i++)
    	{
    		cin>>v[i];
    		a[i]=v[i];
    		min_ele=min(min_ele,v[i]);
    	}

    	sort(v.begin(),v.end());
    	unordered_map<int,int> mp1;
    	unordered_map<int,int> mp2;



    	for(int i=0;i<n;i++)
    	{

    		mp1[v[i]]=i;
    		if(mp2.find(v[i])==mp2.end())
    		{
    			mp2[v[i]]=i;
    		}
    	}    

    	int flag=0;
    	for(int i=0;i<n;i++)
    	{
    		//cout<<mp[a[i]]<<" "<<a[i]<<endl;
    		if(mp2[a[i]]>i && a[i]%min_ele!=0)
    		{
    			flag=1;
    			break;
    		}
    		if(mp1[a[i]]<i && a[i]%min_ele!=0)
    		{
    			flag=1;
    			break;
    		}
    	}
    	if(flag)
    	{
    		cout<<"NO\n";
    	}
    	else
    	{
    		cout<<"YES\n";
    	}
      
    }
    return 0;
}