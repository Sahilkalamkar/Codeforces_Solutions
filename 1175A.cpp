#include<bits/stdc++.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long unsigned int n,k;
		scanf("%llu%llu",&n,&k);
		int h=0;
		long long unsigned int j=n;
		while(1)
		{
			if(j==0)
				break;
			if(j%k==0)
				j=j/k;
			else
				j--;
			h++;
		}
		printf("%d\n",h);
	}
	return 0;
}
