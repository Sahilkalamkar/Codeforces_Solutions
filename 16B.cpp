    /*
     *Author:Yashasvi Goel
     *Date:3/17/19
     */
    #include<bits/stdc++.h>
    struct pair{
    	int a,b;
    };
    bool comp(pair a,pair b)
    {
    	if(a.b>b.b)
    		return 1;
    	else 
    		return 0;
    }
    using std::sort;
    int main()
    {
    	int n,m;
    	scanf("%d%d",&n,&m);
    	struct pair coll[m];
    	int x,y;
    	for(int i=0;i<m;i++)
    	{
    		scanf("%d%d",&x,&y);
    		coll[i].a=x;
    		coll[i].b=y;
    	}
    	sort(coll,coll+m,comp);
    	int c=0,k=0;
    	for(int i=0;i<m;i++)
    	{
    		if(c+coll[i].a<=n)
    		{
    			c=c+coll[i].a;
    			k+=coll[i].a*coll[i].b;
    		}
    		else
    		{
    			k+=coll[i].b*(n-c);
    			c=n;
    		}
    	}
    	printf("%d\n",k);
    	return 0;
    }
