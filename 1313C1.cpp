#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++)
	{
		cin>>v[i];
	}

	vector<long long> ans;
	long long maxsum=0;
	for(long long i=0;i<n;i++)
	{
		vector<long long> temp;
		temp=v;
		long long sum=0;
		for(long long j=i+1;j<n;j++)
		{
			temp[j]=min(temp[j-1],temp[j]);
		}
		for(long long j=i-1;j>=0;j--)
		{
			temp[j]=min(temp[j+1],temp[j]);
		}

		for(long long j=0;j<n;j++)
			sum+=temp[j];
		if(sum>maxsum)
		{
			ans=temp;
			maxsum=sum;
		}
	}

	for(long long i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;

		return 0;
}