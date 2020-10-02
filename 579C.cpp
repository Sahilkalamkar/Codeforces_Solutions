#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL gcd(LL a,LL b){
	LL r = 0;
	while(b>0){
		r = a%b;
		a= b;
		b =r;
}
return a;
}
vector<LL> primes;
void fill(){
	vector<bool>tmp(1000000,true);
	//vector< LL > 	
	tmp[0] = false;
	tmp[1] =false;
for(LL i=0;i<tmp.size();i++){
		if(tmp[i]){
		primes.push_back(i);
		for(LL j=2*i;j<tmp.size();j+=i){
		tmp[j] = false;
}
}
}
tmp.clear();
}
void find(LL n){
	//cout <<" filling for "<< n << endl;
	LL ans = 1;
	for(long int i=0;i<primes.size()&&n>1;i++){
		LL th=0;
		if(n%primes[i]==0){
		while(n%primes[i]==0){
			th++;
			n/=primes[i];
	}
	ans *= (th+1);
	}
}
	if(n>1){
		ans*=2;
}
cout << ans << endl;
}

int main(){
	fill();
//	cout << "done" << endl;
	LL t;cin>>t;LL cg = -1,la = -1;
	for(LL i=0;i<t;i++){
		if(i==0){
		cin >> cg;
	}
	else{
	LL k; cin >> k;
	cg=gcd(cg,k);}
	}
	//cout << "GCD : " << cg << endl;
	find(cg);
}
