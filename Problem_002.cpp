--Problem Link: https://codeforces.com/contest/2093/problem/C

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  if(n == 2 || n == 3) return true;
  else if( n <= 1 || n % 2 == 0 || n % 3 == 0) return false;
  else{
    for(int i = 5; i * i <= n; i += 6){
      if(n % i == 0 || n % (i + 2) == 0) return false;
    }
  }
  return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if(k == 1){
          (isPrime(n)) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
        else if(k == 2 && n == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
