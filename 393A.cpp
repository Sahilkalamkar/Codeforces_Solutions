#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	scanf("%s",s);
	int c=0;
	int i=0;
	int N,I,E,T;
	N=I=E=T=0;
	for(int i=0;s[i];i++)
	{
		if(s[i]=='n')++N;
		else if(s[i]=='e')++E;
		else if(s[i]=='i')++I;
		else if(s[i]=='t')++T;
	}
	int min =E/3;
	if(I<min)
		min=I;
	if(T<min)
		min=T;
	if((N-1)/2<min)
		min=(N-1)/(2);
	printf("%d\n",min);
	return 0;
}
