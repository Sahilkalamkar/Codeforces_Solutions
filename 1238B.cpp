
/*
 * Author: Akansha(akansha_2202)
 * 20/10/2019
 *
 *
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r;
		cin>>n>>r;
		vector<int> v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int c=0;
		int x=0;
		sort(v.begin(),v.end());
		vector<int>::iterator ip=unique(v.begin(),v.end());
		v.resize(std::distance(v.begin(), ip));
		for(int i=v.size()-1;i>=0;i--){
			//cout<<v[i]<<" ";
			if(v[i]-x*r>0){
				c++;
				x++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}




