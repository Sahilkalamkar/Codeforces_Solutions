//By Prajawal Kumar Pandey
//Oct 31 2020

#include<bits/stdc++.h>
#include<string.h>
 
using namespace std;
 
string s;
 
int product(){
long long int l=s.length(),prod=1;
for(long long int i=l-1;i>=0;i--){
prod*=s[i]-'0';
}
return prod;
}
int main(){
cin>>s;
long long int l=s.length(),prod=1,ma=-99999999;
if(l<2){
cout<<s<<endl;
return 0;
}
for(long long int i=l-1;i>0;i--){
prod=product();
ma=max(prod,ma);
s[i]='9';
long long j=i;
while(s[--j]-'0'==0){
s[j]='9';
i--;
}
if(s[i-1]!='1')
s[i-1]=char((s[i-1]-'0')+47);
}
prod=product();
ma=max(prod,ma);
cout<<ma<<'\n';
 
return 0;
}