#include<bits/stdc++.h>

int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int mp[5005]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			mp[a[i]]++;
		}
		bool b=0;
		for(int i=0;i<n;i++){
			mp[a[i]]--;
			if(mp[a[i]]>=2)
			{
				b=1;
				break;
			}
			else if(mp[a[i]]==1 && a[i+1]!=a[i])
			{
				b=1;
				break;
			}
		}
		printf("%s",b?("YES\n"):("NO\n"));
	}
	return 0;
}
