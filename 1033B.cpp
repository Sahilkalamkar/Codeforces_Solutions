    #include<bits/stdc++.h>
    int main()
    {
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    		long long unsigned int a,b;
    		scanf("%llu%llu",&a,&b);
    		bool bo=1;
    		if((a-b)==1)
    		{
    			long long unsigned int k=a+b;
    			for(long long unsigned int i=2;(i*i)<=k;i++)
    				if(k%i==0)
    					bo=0;
    		}
    		else
    		{
    			bo=0;
    		}
    		if(bo)
    			printf("YES\n");
    		else
    			printf("NO\n");
    	}
    	return 0;
    }
