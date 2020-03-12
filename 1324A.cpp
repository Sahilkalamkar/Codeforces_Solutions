#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int b=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2)
				b++;
		}
		if(b==0||b==n)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
