-- Problem Link: https://codeforces.com/problemset/problem/1704/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t; cin>>t;
  while(t--){
    ll n, x; cin>>n>>x;
    vector<ll>v(n);
    for(ll i = 0; i < n; i++) cin>>v[i];
    ll cnt = 0;
    ll l = v[0] - x;
    ll r = v[0] + x;
    for(int i = 1; i < n; i++){
      l = max(l, v[i] - x);
      r = min(r, v[i] + x);
      if(l > r){
        cnt++;
        l = v[i] - x;
        r = v[i] + x;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}
