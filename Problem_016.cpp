-- Problem Link: https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n, k, q; cin>>n>>k>>q;
    long long a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    
    long long cnt = 0;
    long long window = 0;
    
    for(int i = 0; i < n; i++){
      if(a[i] <= q) window++;
      else{
        if(window > k) cnt += ((window - k)* (window - k + 1)) / 2;
        window = 0;
      }
      
      if(window >= k) cnt++;
    }
    
    if(window > k) cnt += ((window - k)* (window - k + 1)) / 2;
    
    cout<<cnt<<endl;
  }
  return 0;
}
