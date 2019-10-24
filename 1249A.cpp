#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int count=0;
	for(int i=1;i<n;i++){
		if(abs(a[i]-a[i-1])==1){
			count++;
		}
	}
	if(count>=1){
		cout<<"2\n";
	}
	else{
		cout<<"1\n";
	}
	}
}
