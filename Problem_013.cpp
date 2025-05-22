-- Problem Link: https://codeforces.com/contest/1515/problem/B

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
  int y = sqrt(x);
  return y*y == x;
}

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    if(n % 2 == 0 && isPrime(n/2)) cout<<"YES"<<endl;
    else if(n % 4 == 0 && isPrime(n/4)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
