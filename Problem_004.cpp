-- Problem Link: https://codeforces.com/contest/1883/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n, k; cin>>n>>k;
      int a[n];
      int cnt = 0;
      int res = INT_MAX;
      for(int i =0; i < n; i++){
        cin>>a[i];
        if(a[i] % 2 == 0) cnt++;
        if(a[i] % k == 0) res = 0;
        else{
          res = min(res, (k - (a[i] % k)));
        }
      }
      if(k != 4) cout<<res<<endl;
      else{
        cout<<min(res,max(0,2-cnt))<<endl;
      }
    }
    return 0;
}
