-- Problem Link: https://codeforces.com/contest/1447/problem/B

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n,m; cin>>n>>m;
    int sm = 0;
    int neg = 0, zero = 0;
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        int x; cin>>x;
        sm += abs(x);
        if(x < 0) neg++;
        else if(x == 0) zero++;
        if(x != 0){
          mn = min(mn, abs(x));
        }
      }
    }
    if(zero == 0){
      if(neg % 2 == 1) cout<<sm - 2*mn<<endl;
      else cout<<sm<<endl;
    }
    else cout<<sm<<endl;
  }
  return 0;
}
