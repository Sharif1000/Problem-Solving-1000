-- Problem Link: https://codeforces.com/problemset/problem/1715/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t; cin>>t;
  while(t--){
    ll n, k, b, s; cin>>n>>k>>b>>s;
    ll mn = k * b;
    ll mx = (n - 1) * (k - 1) + (k * (b+1)) - 1;
    vector<ll>v(n);
    
    if(s == 0 && b == 0){
      for(ll i = 0; i < n; i++){
        cout<<0<<" ";
      }
      cout<<endl;
    }
    else if(s >= mn && s <= mx){
      v[0] = mn;
      ll val = s - mn;
      for(ll i = 1; i < n; i++){
        if(val >= k - 1){
          v[i] = k - 1;
          val -= k - 1;
        }
        else if(val < k - 1){
          v[i] = val;
          val -= val;
        }
      }
      if(val > 0) v[0] +=val;
      for(auto it:v){
        cout<<it<<" ";
      }
      cout<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  return 0;
}
