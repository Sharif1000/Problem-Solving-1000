-- Problem Link: https://codeforces.com/contest/1632/problem/B


#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int val = 1;
    int res = n - 1;
    while(res > 1){
      res /=2;
      val *=2;
    }
    for(int i = n - 1; i > val; i--) cout<<i<<" ";
    cout<<val<<" ";
    for(int i = 0; i < val; i++) cout<<i<<" ";
    cout<<endl;
  }
  return 0;
}