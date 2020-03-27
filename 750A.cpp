#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	k=240-k;
//	k=2*k;
	int i;
	for(i=1;i<=n;i++){
		if(2*k<(5*i*(i+1)))
		{
			printf("%d\n",i-1);
			return 0;
		}
	}
	printf("%d\n",n);

	return 0;
}
