/*
 *Author:Yashasvi Goel
 *Date:7/3/19
 */
 #include<bits/stdc++.h>
    int main()
    {
    	int n,k;
    	scanf("%d%d",&n,&k);
    	int a[n];
    	int gh[k];
    	memset(gh,0,sizeof(int)*k);
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		gh[a[i]%k]++;
    	}
    	int c=0;
    	for(int i=0;i<=k/2;i++)
    	{
    		if(i==0)
    			c+=2*(gh[i]/2);
    		else if(i==k-i)
    			c=c+2*(gh[i]/2);
    		else 
    		{
    			if(gh[i]<gh[k-i])
    				c=c+2*gh[i];
    			else
    				c=c+2*gh[k-i];
    		}
    	}
    	printf("%d\n",c);
    	return 0;
    }
