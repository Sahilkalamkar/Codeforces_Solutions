//By Prajawal Kumar Pandey
//Oct 31 2020

#include<bits/stdc++.h>
using namespace std;
 
int search(vector<int>&vec,int i){
    int lo=0,hi=vec.size()-1;
    while(lo<hi){
        int mid=(lo+hi+1)/2;
        if(vec[mid]<i)lo=mid;
        else hi=mid-1;
    }
    return lo;
}
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
 
        for(int i=0;i<n;i++)cin>>a[i];
        bool flag=1;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                if(a[i]!=a[i-1]+1){
                    flag=0;
                    break;
                }
            }
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
 
    return 0;
}
