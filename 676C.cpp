#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	int maxlen=0;

	int st=0;
	int ed=0;

	int t=k;

	//for a;
	string s2=s;
	
	while(ed<n && st<n)
	{
		if(s[ed]=='a')
		{
			maxlen=max(maxlen,ed-st+1);
			ed++;
		}
		else
		{
			if(t>0)
			{
				ed++;
				t--;
			}
			else
			{
				if(s[st]!='a')
				{
					st++;
					t++;
				}
				else
				{
					st++;
				}
			}
		}

		
	}

	st=0;
	ed=0;
	t=k;
	while(ed<n && st<n)
	{
		if(s[ed]=='b')
		{
			maxlen=max(maxlen,ed-st+1);
			ed++;
		}
		else
		{
			if(t>0)
			{
				ed++;
				t--;
			}
			else
			{
				if(s[st]!='b')
				{
					st++;
					t++;
				}
				else
				{
					st++;
				}
			}
		}
		maxlen=max(maxlen,ed-st);
		//cout<<ed<<" "<<st<<endl;

		
	}
	cout<<maxlen<<endl;
	return 0;

}