#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;cin>> q;
	while(q--){
		long int n;cin >> n; 
		vector< pair< pair<int, int > ,int > > v;
		for(int i =0;i<n;i++){
			int a,b;cin >> a>> b;
			// cin >> a>> b;
			v.push_back(make_pair(make_pair(a,b),i));
		}
		sort(v.begin(),v.end());
		vector<pair<int,int > > grp(n);
		grp[0]=make_pair(v[0].second,1);long int grp1end=v[0].first.second,grp2end=0;bool poss=true;
		for(int i=1;i<v.size();i++){
			if(v[i].first.first <= grp1end){
				// if(v[i].first > grp2end)
				grp[i]=make_pair(v[i].second,1);
				// grp1end = v[i].second;
				if(grp1end < v[i].first.second){
					grp1end=v[i].first.second;
				}
			}
			else if(v[i].first.first <= grp2end)
			{
				grp[i]=make_pair(v[i].second,2);
				// grp2end=v[i].second;
				if(grp2end < v[i].first.second){
					grp2end=v[i].first.second;
				}
			}
			else
				{grp2end=v[i].first.second;grp[i]=make_pair(v[i].second,2);}
		}

		if(grp2end > 0){
			sort(grp.begin(), grp.end());
			for(int i=0;i<n;i++)
			{
				cout << grp[i].second<<" ";
			}
			cout<<endl;
		}
		else
			cout << -1 << endl;
	}	
}
