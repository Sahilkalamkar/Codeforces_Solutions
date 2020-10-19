#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    
	    int x = fabs(a-b);
	    int moves = x/10;
	    
	    if(x%10==0);
	    else moves++;
	    
	    cout << moves << endl;
	}
	return 0;
}