/*
 * Author:Yashasvi
 * Date: 11/9/19
 */
    #include<bits/stdc++.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int *a=(int*)malloc(sizeof(int)*n);
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	std::sort(a,a+n);
     
    	int i=0;
    	int j=0;
    	int *b=(int*)malloc(sizeof(int)*n);
    	for(i=0;i<n;i=i+2)
    	{
    		b[j++]=a[i];
    	}
    	if(i==n+1)
    		for(i=n-2;i>0;i=i-2)
    			b[j++]=a[i];
    	else
    		for(i=n-1;i>0;i=i-2)
    			b[j++]=a[i];
    	for(i=0;i<n;i++)
    		printf("%d ",b[i]);
    	printf("\n");
    	return 0;
    }
