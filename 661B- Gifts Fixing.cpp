#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long int>a(n);
        vector<long int>b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        vector<long int>as(n);
        vector<long int>bs(n);
        int amin = *min_element(a.begin(), a.end());
        int bmin = *min_element(b.begin(), b.end());

        for(int i=0; i<n; i++) as[i] = a[i] - amin;
        for(int i=0; i<n; i++) bs[i] = b[i] - bmin;

        long long int moves = 0;
        for(int i=0; i<n; i++){
            if(as[i]>=bs[i]) moves += as[i];
            else moves += bs[i];
        }
        cout << moves << endl;

    }
    return 0;
}
