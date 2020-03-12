#include<bits/stdc++.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,m;
		scanf("%d%d",&h,&m);
		printf("%d\n",60-m+(23-h)*60);
	}
	return 0;
}
