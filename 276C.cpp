#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,q,temp,y,ans=0;
	cin>>n;
	cin>>q;
	vector<long long int> a;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.end());
	vector<int> mp(a.size()+1,0);
	for(int i=0;i<q;i++){
		cin>>temp;
		cin>>y;
		mp[temp-1]+=1;
		mp[y]-=1;
	}
	for(int i=1;i<mp.size();i++){
		mp[i]=mp[i]+mp[i-1];
	}
	sort(mp.begin(),mp.end()-1);
	int k=a.size()-1;
	for(int i=k;i>=0;i--){
//		cout<<a[i]<<" "<<mp[i]<<endl;
		ans=ans+(a[i]*mp[i]);
	}
	cout<<ans<<endl;
	return 0;
}
