-- Problem Link: https://codeforces.com/contest/1876/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      long long n, k; cin>>n>>k;
      long long a[n], b[n];
      for(long long i = 0; i < n; i++) cin>>a[i];
      for(long long i = 0; i < n; i++) cin>>b[i];
      
      priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> minHeap;

      for (long long i = 0; i < n; ++i) {
          minHeap.push({b[i], a[i]});
      }
      
      
      long long sum = 0;
      pair<long long,long long> minfirstvalue = minHeap.top();
      long long mn = minfirstvalue.first;
      if(k <= mn) sum = k * n;
      else{
        sum += k;
        n--;
        while(!minHeap.empty() && n > 0){
          auto[val, idx] = minHeap.top();
          minHeap.pop();
          if(val > k){
            sum += k * n;
            n -= n;
          }
          else if(n < idx){
            sum += val * n;
            n -= n;
          }
          else{
            sum += val * idx;
            n -= idx;
          }
        }
      }
      cout<<sum<<endl;

    }
    return 0;
}
