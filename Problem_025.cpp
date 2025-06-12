-- Problem Link: https://codeforces.com/problemset/problem/1691/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<int>v(n), p(n);
    map<int,int>mp;
    for(int i = 0; i < n; i++){
      cin>>v[i];
      mp[v[i]]++;
      p[i] = i + 1;
    }
    
    bool flag = true;
    for(int i = 0; i < n; i++){
      if(mp[v[i]] == 1){
        flag = false;
        break;
      }
    }
    if(flag == false) cout<<-1<<endl;
    else{
      int l = 0, i = 1;
      for(i = 1; i < n; i++){
        if(v[i] != v[i-1]){
          rotate(p.begin()+l, p.begin()+i-1, p.begin()+i);
          l = i;
        }
      }
      
      rotate(p.begin()+l, p.begin()+i-1, p.begin()+i);
      
      for(auto it:p) cout<<it<<" ";
      cout<<endl;
    }
  }
  return 0;
}
