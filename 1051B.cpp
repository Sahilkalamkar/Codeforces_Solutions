/*
 * Author:Yashasvi
 * Date: 11/9/19
 */
    #include<bits/stdc++.h>
    int main()
    {
    	long long unsigned int r,l;
    	scanf("%llu%llu",&r,&l);
    	printf("YES\n");
    	for(long long unsigned int i=r;i<l;i=i+2)
    		printf("%llu %llu\n",i,i+1);
    	return 0;
    }
