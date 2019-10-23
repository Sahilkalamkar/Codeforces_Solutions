/*
 * Author : Akansha
 * 22/10/19
 *
 */

#include<iostream>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		if((x-y)<=1){
			cout<<"NO\n";
		}
		else
			cout<<"YES\n";
	}
	return 0;
}
