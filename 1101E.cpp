#include<bits/stdc++.h>
using namespace std;
int main(){
	long int q;
	cin>> q;
	long int minh=0,minw=0;
	while(q--){
		char c;long int a,b;
		cin >> c >> a >> b;
		if(c == '+'){
			if(a < b){
				long int k = a;
				a = b ; b = k;
			}
			if(minw < b)
				minw = b;
			if(minh < a)
				minh = a;
		}
		else{
			if(a < b){
				long int k = a;
				a = b ; b = k;
			}
			{if(minh <= a && minw <= b)
				cout << "YES"<<endl;
			else
				cout << "NO" <<endl;
			}
		}
	}
}
