/*
 * Author: Akansha(akansha_2202)
 * Date : 22/10/2019
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[i]=a[i];
	}
	for(int j=0;j<n;j++){
		b[j]=0;
	}
	for(int i=0;i<n;i++){
		if(i==0){
			if(a[i]>a[i+1]){
				b[i]=1;
				continue;
			}
		}
		else if(i==n-1){
			if(a[i]<a[i-1]){
				b[i]=1;
				continue;
			}
		}
		else if(a[i-1]>a[i]&&a[i]<a[i+1]){
			b[i]=1;
			continue;
		}
		else if(a[i-1]<a[i]&&a[i]>a[i+1]){
			b[i]=1;
			continue;
		}
	}
	int x=1,y=1;
	if(is_sorted(a,a+n)){
		cout<<"yes"<<endl;
		cout<<x<<" "<<y<<endl;
	}
	else{

		int temp[n];
		int k=0;
		for(int i=0;i<n;i++){
			if(b[i]==1){
				temp[k]=i;
				k++;
			}
		}
		x=temp[0];
		y=temp[1];
		int m=x;
		int l=y;
		//swap(a[x],a[y]);
		for(int i=x;i<=y;i++){
			a[i]=c[l];
			l--;
		}
		//for(int i=0;i<n;i++)
			//cout<<a[i]<<" ";

		if(is_sorted(a,a+n)){
			cout<<"yes";
			cout<<endl;
			cout<<x+1<<" "<<y+1<<endl;
		}
		else
			cout<<"no"<<endl;
		//cout<<endl;
		//cout<<temp[0]+1<<" "<<temp[1]+1<<endl;
	}

		/*for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}*/
		return 0;
}


