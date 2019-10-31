/*
 *Author:Yashasvi Goel
 *Date:25/1/19
 */
#include<bits/stdc++.h>
    using std::sort;
    int main()
    {
    	int q;
    	scanf("%d",&q);
    	int a,b,c,d;
    	for(int i=0;i<q;i++)
    	{
    		scanf("%d%d%d%d",&a,&b,&c,&d);
    		if(a<=c)
    			printf("%d %d\n",a,d);
    		else 
    			printf("%d %d\n",b,c);
    	}
    	return 0;
    }
