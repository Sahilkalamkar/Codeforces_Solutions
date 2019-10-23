/*
 *Author : Akansha
 *23/10/19
 */

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
		int l[n+5]={0};
		map<int,bool> visited;
		for(int i=1;i<=n;i++){
			int count=0;
			int per=a[i-1];
			//cout<<"per is "<<per;				
			vector<int> v;
			//cout<<"ok2\n";
			if(!visited[i]){
				//cout<<"ok1\n";
				while(1){
					if(per==i){
						count++;
						v.push_back(i);
						visited[i]=true;
						break;
					}
					else{
						//cout<<per<<" ";
						per=a[per-1];
						count++;
						v.push_back(per);
						visited[per]=true;
					}	
				}
				//cout<<endl;
				for(int i=0;i<v.size();i++){
					l[v[i]-1]=count;
 
				}
			}
			v.clear();
		}
 
		for(int i=0;i<n;i++){
			cout<<l[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
 
