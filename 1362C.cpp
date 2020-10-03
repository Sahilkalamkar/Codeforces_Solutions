#include<bits/stdc++.h>
using namespace std;
long long int power(long long int n){
    long long int res=1;
    while(res<=n){
        res=res*2;
    }
    return res/2;
}
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int sum=0;
        while(n>0){
            sum=sum+2*power(n)-1;
            n=n-power(n);
        }
        cout<<sum<<"\n";
    }
	return 0;
}
