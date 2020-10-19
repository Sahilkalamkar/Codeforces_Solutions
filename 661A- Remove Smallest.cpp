#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        if(n==1){
            cout << "YES" << endl;
            continue;
        }
        bool flag = true;
        for(int i=1; i<n; i++){
            if (a[i]-a[i-1] > 1){
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
    }
    return 0;
}
