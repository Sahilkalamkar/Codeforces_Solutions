#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	string d;
	while(t--)
	{
		set<char> mp;
		unordered_map<char,int> m;
		cin>>d;
		for(int i=0;i<d.size();i++)
		{
			int j=i;
			while(j+1<d.size() && d[j+1]==d[j])
				j++;
			if((j-i)%2==0)
				mp.insert(d[j]);
			i=j;
		}
		string h="";
		for(auto it=mp.begin();it!=mp.end();++it)
		{
			h=h+*it;
		}
		sort(h.begin(),h.end());
		cout<<h<<endl;
	}
	return 0;
}
