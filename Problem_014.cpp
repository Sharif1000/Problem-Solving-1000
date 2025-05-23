-- Problem Link: https://codeforces.com/contest/1418/problem/A

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while (t--){
        long long x, y, k;
        cin >> x >> y >> k;

        long long sticks_gained_per_trade = x - 1;
        long long sticks_needed = k * y + k - 1;

        long long trades = 0;
        trades += (sticks_needed + sticks_gained_per_trade - 1) / sticks_gained_per_trade;
        trades += k;                                                   
        cout << trades << endl;
    }
}
