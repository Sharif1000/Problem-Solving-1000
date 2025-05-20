-- Problem Link: https://codeforces.com/contest/1374/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    int opening = 0;
    int closing = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
      if(s[i] == '(') opening++;
      else{
        if(opening <= closing) cnt++;
        else opening--;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}
