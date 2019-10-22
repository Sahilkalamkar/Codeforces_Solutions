/*
 * Author: Akansha(akansha_2202)
 * Date : 22/10/2019
 */


#include<bits/stdc++.h>
using namespace std;

int p[1000002];

int main(){
	int n;
	cin>>n;
	int t;
	int max=0;

	for(int i=0;i<n;i++){
		cin>>t;
		p[t]++;
		if(max<t)
			max=t;
	}
	for(int i=0;i<=1000002;i++){
		p[i]=p[i]+p[i-1];
	}
	int temp;
	int n1;
	cin>>n1;
	while(n1--){
		cin>>temp;
		if(temp<1000002)
		cout<<p[temp]<<endl;
		else
			cout<<p[1000002]<<endl;
	}
	return 0;
}



