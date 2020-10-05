#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	long int ans=0,largest=0;char openbracket='[',closebracket=']',colon=':';
	bool opened=false,closed=false;int colons = 0;string smallstr="";
	vector<long int> ob,cb;vector< pair<long int, long int > >col;int pipes = 0;
	for(long int i=0;i<s.length();i++){
			// cout << s[i]<<" ";
			if(s[i]==openbracket)
				ob.push_back(i);
			else if(s[i]==closebracket && col.size()>1)
				cb.push_back(i);
			else if(s[i]==colon && ob.size()>0)
				col.push_back(make_pair(i,pipes));
		else if(s[i]=='|' && col.size()>0){
			pipes++;
		}
	}
	int i=0;
	{if(cb.size()>0){
	for(i=col.size()-1;i>=0;i--){
		if(col[i].first < cb[cb.size()-1])
			break;
	}}}
	if(i>0){
		cout << col[i].second+4<<endl;
	}
	else{
		cout << -1 << endl;
	}
	//add 4 to end;
}
