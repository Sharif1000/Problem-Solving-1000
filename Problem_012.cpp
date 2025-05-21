-- Problem Link: https://codeforces.com/contest/1713/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<int>v(n);
    int mx = 0;
    int idx = 0;
    for(int i = 0; i < n; i++){
      cin>>v[i];
      if(v[i] > mx){
        mx = v[i];
        idx = i;
      }
    }
    bool flag = true;
    for(int i= 1; i < idx; i++){
      if(v[i] < v[i-1]){
        flag = false;
        break;
      }
    }
    for(int i= idx+1; i < n; i++){
      if(v[i] > v[i-1]){
        flag = false;
        break;
      }
    }
    (flag)? cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
