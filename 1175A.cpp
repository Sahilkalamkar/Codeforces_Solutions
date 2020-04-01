#include<bits/stdc++.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long unsigned int n,k;
		scanf("%llu%llu",&n,&k);
		long long unsigned int h=0;
		long long unsigned int j=n;
		while(j!=0)
		{
			if(j%k==0)
			{
				j=j/k;
				h++;
			}
			else
			{
				long long unsigned int temp=j%k;
				h=h+temp;
				j=j-temp;
			}
		}
		printf("%llu\n",h);
	}
	return 0;
}
