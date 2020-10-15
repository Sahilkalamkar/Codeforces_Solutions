#include<bits/stdc++.h>
using std::sort;
int main()
{
	int n;
	scanf("%d",&n);
	long long unsigned int asd=0;
	int *a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		asd=asd+a[i];
	}
	sort(a,a+n);
	int m;
	scanf("%d",&m);
	int *b=(int*)malloc(sizeof(int)*m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		printf("%llu\n",asd-a[n-b[i]]);
	}
	return 0;
}
