#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main(){
	LL t;cin >>t;
while(t--){
	LL n;	cin >> n;
vector<LL> v(n,0);LL maxv=INT_MIN,maxin,minv=INT_MAX,minin;
	for(LL i=0;i<n;i++){
	cin >> v[i];
	if(v[i] > maxv){
	maxv = v[i];
maxin = i;
}
if(v[i] < minv){
minv = v[i];
minin = i;
}
}
long int el=0,d=1;
if(minin>maxin)
d=-1;
while(el<n-1){
	if(v[maxin % n] <= v[(maxin+d) % n]){
	break;
}
	maxin += d;
	el++;
}
cout << el << endl;
if(el == n-1){
cout << "YES" << endl;
}
else{
	cout << "NO" << endl;
}	
}

}
