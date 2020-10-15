#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	scanf("%d",&q);
	long long unsigned int a,b,c;
	for(int i=0;i<q;i++)
	{
		scanf("%llu%llu%llu",&a,&b,&c);
		long long unsigned int k;
		k=a+b+c;
		printf("%llu\n",k/2);
	}
	return 0;
}
