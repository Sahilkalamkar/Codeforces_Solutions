#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	string k;
	cin>>k;
	string s = k;
	s = s + "a";
	ll n = k.length();
	for(int i=1;i<=n;i++){
		s[i] = k[i-1];
	}
	ll ans=0;
	// l<x<x+2k<r
	ll l=0;
	for(int i=1;i<=n;i++){
		for(int j=1;i-j-j>=l;j++){
			if(s[i]==s[i-j] && s[i-j]==s[i-j-j]){
				l = i-j-j;
			}	
		}
		ans+=l;
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
