#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	string s[n];
	string t[m];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>t[i];
	}
	int q;
	scanf("%d",&q);
	int x,u,w;
	for(int i=0;i<q;i++)
	{
		scanf("%d",&x);
		u=x%n;
		w=x%m;
		if(u==0)
			u=n;
		if(w==0)
			w=m;
		cout<<s[u-1]+t[w-1]<<endl;
	}
	return 0;
}
