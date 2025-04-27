-- Problem Link: https://codeforces.com/problemset/problem/1913/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      int one = 0;
      int zero = 0;
      for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') zero++;
        else one++;
      }
      int cnt = 0;
      if(one == zero) cout<<0<<endl;
      else{
        for(int i = 0; i < s.length(); i++){
          if(s[i] == '1'){
            if(zero != 0) zero--;
            else{
              cnt = cnt + one;
              break;
            }
          }
          else{
            if(one != 0) one--;
            else{
              cnt = cnt + zero;
              break;
            }
          }
        }
        cout<<cnt<<endl;
      }
    }
    return 0;
}
