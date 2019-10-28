#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int avg=a+b+c;
		avg=avg/3;
		bool r1,r2;
		r1=r2=0;
		if(avg-a>0)
		{
			r1=1;
			if(b>(avg-a))
			{
				b-=(avg-a);
				a=avg;
			}
			else{
				a=a+b;
				b=0;
			}
		}
		if(avg-c>0)
		{
			r2=1;
			if(b>(avg-c))
			{
				b-=(avg-c);
				c=avg;
			}
			else{
				c=c+b;
				b=0;
			}
		}
		//if(!r1&!r2)

		if(a>c)
		{
			a=a+b;
			b=0;
			b=a/2;
			a=a-b;
		}
		else{
			c=c+b;
			b=0;
			b=c/2;
			c=c-b;
		}

//		printf("%d %d %d\n",a,b,c);
		printf("%d\n",max(max(a,b),c));
	}
}
