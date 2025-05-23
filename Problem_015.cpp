-- Problem Link: https://codeforces.com/contest/1849/problem/B

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while (t--){
        int n,k; cin>>n>>k;
        
        vector<pair<int,int>>v(n);
        for(int i = 0; i < n; i++){
          int x; cin>>x;
          (x % k == 0)? x = k: x = x % k;
          v[i] = {x,i+1};
        }
        
        sort(v.begin(), v.end(), [](pair<int, int>&a, pair<int, int>&b){
          if(a.first == b.first) return a.second < b.second;
          else return a.first > b.first;
        });
        
        for(auto it:v){
          cout<<it.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
