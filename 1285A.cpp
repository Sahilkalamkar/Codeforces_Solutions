#include<bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	int l,r;
	l=r=0;
	for(int i=0;s[i];++i)
	{
		if(s[i]=='L')
			--l;
		if(s[i]=='R')
			++r;
	}
	printf("%d\n",(r-l+1));
	return 0;
}
