--Problem Link: https://codeforces.com/contest/1985/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        
        long long presm[n];
        presm[0] = arr[0];
        for(int i = 1; i < n; i++) presm[i] = presm[i-1] + arr[i];
        
        int maxvalue = 0;
        int mx[n];
        for(int i = 0; i< n; i++){
          maxvalue = max(maxvalue, arr[i]);
          mx[i] = maxvalue;
        }
        
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(presm[i] / 2 == mx[i]) cnt++;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}
