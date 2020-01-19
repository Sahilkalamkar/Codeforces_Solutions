#include<bits/stdc++.h>
using namespace std;
int diff(int a,int b,int c){
	return abs(a-b)+abs(b-c)+abs(c-a);
}
int main()
{
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;++i)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int ans;
		ans=diff(a,b,c);
		if(ans==0)
		{
			printf("0\n");
			continue;
		}
		for(int da=-1;da<=1;da++)
			for(int db=-1;db<2;db++)
				for(int dc=-1;dc<=1;dc++)
				{
					ans=min(diff(a+da,b+db,c+dc),ans);
				}
		printf("%d\n",ans);
	}
	return 0;
}
