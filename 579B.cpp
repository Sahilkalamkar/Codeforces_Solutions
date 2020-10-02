#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main(){
	long int t;cin>>t;
while(t--){
	long int n;cin >> n;
	vector< long int > v(4*n,0);
	for(long int i=0;i<4*n;i++){
	cin >> v[i];
}
sort(v.begin(),v.end());
bool cor = true;
for(LL i=0;i<4*n;i+=2){
	if(v[i] != v[i+1]){
		cor = false;
break;
}
}
if(cor){
	long int arr = v[0] * v.back();
	for(long int i=0;i<2*n;i+=2){
		if(v[i] * v[4*n-i-1] !=arr){
	cor = false;
break;
}
	}
}
if(!cor){
cout << "NO" << endl;
}
else
cout << "YES" << endl;
}
}
