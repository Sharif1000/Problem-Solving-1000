-- Problem Link: https://codeforces.com/contest/1155/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  string s; cin>>s;
  bool flag = false;
  for(int i = 1; i < n; i++){
    if(s[i] < s[i-1]){
      flag = true;
      cout<<"YES"<<endl;
      cout<<i<<" "<<i+1<<endl;
      break;
    }
  }
  if(!flag) cout<<"NO"<<endl;
  return 0;
}
