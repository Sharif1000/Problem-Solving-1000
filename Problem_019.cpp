-- Problem Link: https://codeforces.com/contest/1659/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n, r, b; cin>>n>>r>>b;
    string s="";
    for(int i=0; i < n; i++) s+="R";
    int val = n/(b +1);
    for(int i = val; i < n; i += val+1){
      s[i] = 'B';
      b--;
    }
    int i = val+1;
    while(b > 0){
      s[i] = 'B';
      b--;
      i +=val+1;
    }
    cout<<s<<endl;
  }
  return 0;
}
