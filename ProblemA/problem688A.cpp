// https://codeforces.com/contest/688/problem/A
// A. Opponents
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Arya has n opponents in the school. Each day he will fight with all opponents who are present this day. 
// His opponents have some fighting plan that guarantees they will win, but implementing this plan requires presence of them all. 
// That means if one day at least one of Arya's opponents is absent at the school, then Arya will beat all present opponents. 
// Otherwise, if all opponents are present, then they will beat Arya.

// For each opponent Arya knows his schedule — whether or not he is going to present on each particular day. 
// Tell him the maximum number of consecutive days that he will beat all present opponents.

// Note, that if some day there are no opponents present, Arya still considers he beats all the present opponents.

// Input
// The first line of the input contains two integers n and d (1 ≤ n, d ≤ 100) — the number of opponents and the number of days, respectively.

// The i-th of the following d lines contains a string of length n consisting of characters '0' and '1'. 
// The j-th character of this string is '0' if the j-th opponent is going to be absent on the i-th day.

// Output
// Print the only integer — the maximum number of consecutive days that Arya will beat all present opponents.
#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, d, count = 0, mx = 0;
    cin >> n >> d;
    int a[d];
    for(int i = 0; i < d; i++) {
        a[i] = 0;
        string s;
        cin>>s;
        for(int j = 0; j < n; j++) {
            if(s[j] == '0') {
                a[i]++;
            }
        }
    }
    for(int i = 0; i < d; i++) {
        if(a[i] != 0) {
            count++;
        } else {
            mx = max(count, mx);
            count = 0;
        }
    }
    mx = max(count, mx);
    cout<<mx;
    
    return 0;
}