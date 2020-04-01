#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,temp,ans=0;
	cin>>n;
//	scanf("%d",&n);
	vector<int> a;
	for(long long int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.end());
	for(int i=n-1;i>=0;i--){
		ans+=abs(a[i]-i-1);
	}
	cout<<ans<<endl;
	return 0;
}
