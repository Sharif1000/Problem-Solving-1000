-- Problem Link: https://codeforces.com/contest/1312/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
  }
  return 0;
}
