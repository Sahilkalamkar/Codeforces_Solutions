#include<bits/stdc++.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a+b+1<c)
			printf("No\n");
		else if(1+b+c<a)
			printf("No\n");
		else if(a+1+c<b)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
