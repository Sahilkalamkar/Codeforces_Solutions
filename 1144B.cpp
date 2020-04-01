#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	scanf("%d",&n);
	vector<int> a;
	int o=0;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		a.push_back(temp);
		if(temp%2)
			o++;
	}
	int e=n-o;
	if(abs(e-o)<2){
		printf("0\n");
		return 0;
	}
	long long ans=0;
	sort(a.begin(),a.end(),[&](int a,int b){if(b%2==a%2)return a<b;else return a%2==0;});
	if(e>o){
		int h=e-o-1;
		for(int i=0;i<h;i++){
			ans+=a[i];
		}
	}
	else{
		int h=o-e-1;
		for(int i=e;i<e+h;i++){
			ans+=a[i];
		}
	}
	cout<<ans<<endl;
//	for(int i=0;i<n;i++)
//		printf("%d ",a[i]);
	return 0;
}
