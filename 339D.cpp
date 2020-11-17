#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;

vector<int> segtree(530000,0);
void update(int ind,int val,int s,int e,int ti,int op){
    if(ind<s || e<ind)
        return;
    if(s==e){
        segtree[ti] = val;
        return;
    }
    int mid = (s+e)/2;
    update(ind,val,s,mid,2*ti,1-op);
    update(ind,val,mid+1,e,2*ti+1,1-op);
    if(op)
        segtree[ti] = segtree[2*ti] | segtree[2*ti+1];
    else
        segtree[ti] = segtree[2*ti] ^  segtree[2*ti+1];
}


int main(){
    fast;
    int bits,m;
    cin>>bits>>m;
    int n = 1<<bits;
    int op = bits&1;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        update(i,a[i],1,n,1,op);
    }
    int ind,val;
    for(int i=1;i<=m;++i){
        cin>>ind>>val;
        update(ind,val,1,n,1,op);
        cout<<segtree[1]<<endl;
    }
}
