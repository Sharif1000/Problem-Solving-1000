-- Problem Link: https://codeforces.com/contest/1362/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    long long a,b; cin>>a>>b;
    long long ra = a, rb = b;
    while(ra % 2 == 0) ra /=2;
    while(rb % 2 == 0) rb /=2;
    if(ra != rb) cout<<-1<<endl;
    else{
      a = log2(a / ra);
      b = log2(b / rb);
      cout<<ceil(abs(a-b)/3.0)<<endl;
    }
  }
  return 0;
}
