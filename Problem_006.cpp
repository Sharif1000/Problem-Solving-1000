-- Problem Link: https://codeforces.com/contest/1736/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      int b[n+1];
      b[0] = a[0];
      b[n] = a[n-1];
      for(int i = 1; i<n; i++){
        b[i] = (a[i] * a[i-1]) / __gcd(a[i], a[i-1]);
      }
      bool flag = true;
      for(int i = 1; i<=n; i++){
        if(__gcd(b[i],b[i-1]) != a[i-1]){
          flag = false;
          break;
        }
      }
      (flag)? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
