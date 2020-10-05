#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin >> q; 
	while(q--){
		long int a,b,c;
		cin >> b >> c>>a;
		if(b%a==0){
			b = b/a;
			if(b>1){
				cout << a << endl;
			}
			else
				cout << (c/a + 1)*a<<endl;
		}
		else
		{
			if(b/a > 0){
				cout << a << endl;
			}
			else
			{
				cout << (c/a + 1 )*a<<endl;
			}
		}


	}
}
