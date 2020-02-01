///#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c,r;
		scanf("%d%d%d%d",&a,&b,&c,&r);
		if(a>b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		int left,right;
		left=c-r;
		right=c+r;
		if(right>a&&left<b)
			printf("%d\n",(left<a?0:abs(a-left))+(right>b?0:abs(b-right)));
		else
			printf("%d\n",abs(b-a));
	}
	return 0;
}
