-- Problem Link: https://codeforces.com/contest/1589/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int a, b; cin>>a>>b;
      if((a*b) % 3 == 0) cout<<(a*b) / 3<<endl;
      else{
        int res = ceil((a * b)*1.0 / 3);
        cout<<res<<endl;
      }
    }
    return 0;
}
