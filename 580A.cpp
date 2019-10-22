/*
 * Author: Akansha(akansha_2202)
 * 20/10/2019
 *
 *
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+5];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=1;
	int cm=1;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			cm++;
		}
		else{
			cm=1;
		}
		if(cm>m){
			m=cm;
		}
	}
	cout<<m<<endl;
	return 0;
}
	

