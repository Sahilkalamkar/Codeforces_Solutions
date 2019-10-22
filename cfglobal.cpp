#include<bits/stdc++.h>

using namespace std;

#define pb push_back

typedef long long ll;
bool comp(pair<int,int> p1,pair<int,int> p2)
{
	return p1.second<p2.second;
}

int main()
{

	int n,d;
	cin>>n>>d;

	vector<pair<int,int> > v;

	ll m,s;

	for(int i=0;i<n;i++)
	{
		cin>>m>>s;
		v.pb({m,s});
	}

	sort(v.begin(),v.end()); 


	int lp =0 ;
	int rp = 0;
	
	ll sum = 0;
	ll final = 0;

	while(rp<n)
	{	
		if(v[rp].first-v[lp].first<d)
		{
			sum+=v[rp].second;
			rp++;
		}
		else
		{
			sum-=v[lp].second;
			lp++;
		}
		if(sum>final)
			final=sum;
	}

	cout<<final<<'\n';

	return 0; 
}