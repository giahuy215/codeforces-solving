// https://codeforces.com/contest/686/problem/A
// A. Free Ice Cream
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// After their adventure with the magic mirror Kay and Gerda have returned home and sometimes give free ice cream to kids in the summer.

// At the start of the day they have x ice cream packs. Since the ice cream is free, people start standing in the queue before Kay and Gerda's house even in the night. 
// Each person in the queue wants either to take several ice cream packs for himself and his friends or 
// to give several ice cream packs to Kay and Gerda (carriers that bring ice cream have to stand in the same queue).

// If a carrier with d ice cream packs comes to the house, then Kay and Gerda take all his packs. 
// If a child who wants to take d ice cream packs comes to the house, then Kay and Gerda will give him d packs if they have enough ice cream, 
// otherwise the child will get no ice cream at all and will leave in distress.

// Kay wants to find the amount of ice cream they will have after all people will leave from the queue, 
// and Gerda wants to find the number of distressed kids.

// Input
// The first line contains two space-separated integers n and x (1 ≤ n ≤ 1000, 0 ≤ x ≤ 10^9).

// Each of the next n lines contains a character '+' or '-', and an integer di, separated by a space (1 ≤ di ≤ 10^9). 
// Record "+ di" in i-th line means that a carrier with di ice cream packs occupies i-th place from the start of the queue, 
// and record "- di" means that a child who wants to take di packs stands in i-th place.

// Output
// Print two space-separated integers — number of ice cream packs left after all operations, 
// and number of kids that left the house in distress.
#include<bits/stdc++.h>
 
typedef long long ll; 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, x, cnt = 0;
    cin >> n >> x;
    pair<char,ll> a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    for(int i = 0; i < n; i++) {
        if(a[i].first == '+') {
            x += a[i].second;
        } else if(a[i].second > x) {
            cnt++;
        } else {
            x -= a[i].second;
        }
    }
    cout << x << " " << cnt;
    
    return 0;
}