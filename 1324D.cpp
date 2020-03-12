#include<bits/stdc++.h>
using namespace std;
long long unsigned int findPairs(int arr[],int n)
{
    int l = 0, r = n-1;
    long long unsigned int result = 0;

    while (l < r)
    {
        if (arr[l] + arr[r] > 0)
        {
            result += (r - l);
            r--;
        }
        else
            l++;
    }
    return result;
}
int main()
{
	int n;
	scanf("%d",&n);
//	printf("%d\n",n);
	int a[n];
	int b[n];
	int c[n];
	int p=0;
	int k=0;
	int mp[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}                    
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
		mp[i]=c[i];
//		printf("%d\n",c[i]);
		if(c[i]>0)
			p++;
		else if(c[i]<0)
			k++;
	}
	int x,y;
	x=0;
	y=n-1;
	sort(mp,mp+n);
	printf("%llu\n",findPairs(mp,n));
	return 0;
	int u=0;
	long long unsigned int count=0;
	printf("%d\n",p);
	count=(p)*(p-1)-(n-k-p)*(n-k-p-1);
	while(x<y&&mp[x]<0)
	{
		if((mp[x]+mp[y])>0)
		{
			y--;
			u++;
		}
		else{
			x++;
			count=count+u;
			u=0;
		}
	}
	printf("%llu\n",count);
	return 0;
}
