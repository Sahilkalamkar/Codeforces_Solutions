#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	scanf("%d%d",&n,&d);
	vector<int> a;int f;
	for(int i=0;i<n;i++){
		cin>>f;
		a.push_back(f);
	}
	sort(a.begin(),a.end());
	int m=INT_MIN;
	for(int i=0;i<n;i++){
		int k=a[i]+d;
		for(int j=i;j<n;j++)
			if(a[j]<=k&&j-i+1>m){
				m=j-i+1;//max(m,(j-i));
			}
	}
	if(m==INT_MIN)
		cout<<0<<endl;
//	return 0;
	else
		cout<<n-m<<endl;
	return 0;
}
