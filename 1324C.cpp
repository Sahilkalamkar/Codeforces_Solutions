#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		int i=0;
		int so,c;
		so=c=0;
		while(s[i])
		{
			if(s[i]=='L')
				so++;
			else{
				c=max(so,c);
				so=0;
			}
			i++;
		}
		c=max(so,c);
		printf("%d\n",c+1);
	}
}
