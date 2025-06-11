-- Problem Link: https://codeforces.com/problemset/problem/1725/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n, d; cin>>n>>d;
  vector<ll>v(n);
  for(ll i = 0; i < n; i++) cin>>v[i];
  sort(v.begin(), v.end());
  int cnt = 0;
  int i = v.size() - 1;
  while(n > 0){
    ll val = ceil(d * 1.0 / v[i]);
    if(val <= n && (val * v[i]) > d){
      cnt++;
    }
    else if(val + 1 <= n && (val * v[i]) == d){
      cnt++;
      n -=1;
    } 
    n -=val;
    i--;
  }
  cout<<cnt;
  return 0;
}
