/*
 *Author:Yashasvi
 *Date:11/8/19
 */
 #include<bits/stdc++.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	while(n--)
    	{
    		long long c,x;
    		scanf("%llu%llu",&c,&x);
    		printf("%llu\n",9*(c-1)+x);
    	}
    	return 0;
    }
