-- Problem Link: https://codeforces.com/contest/450/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m; cin>>n>>m;
    int idx = 0;
    int res = 0;
    int a[n+1];
    for(int i = 1; i <= n; i++){
      cin>>a[i];
      int e = ceil(a[i] * 1.0 /m);
      if(e >= res){
        res = e;
        idx = i;
      }
    }
    cout<<idx;
    return 0;
}
