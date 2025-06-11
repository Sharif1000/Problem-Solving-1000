-- Problem Link: https://codeforces.com/problemset/problem/1620/B

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    long long w, h; cin>>w>>h;
    long long area = INT_MIN;
    for(int i=0; i < 4; i++){
      int k; cin>>k;
      int mn, mx;
      for(int j=0; j < k; j++){
        int x; cin>>x;
        if(j == 0) mn = x;
        else if(j == k-1) mx = x;
      }
      if(i < 2) area = max(area, (mx-mn)*h);
      else area = max(area, (mx-mn)*w);
    }
    cout<<area<<endl;
  }
  return 0;
}
