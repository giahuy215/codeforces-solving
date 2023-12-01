// https://codeforces.com/problemset/problem/32/A
// A. Reconnaissance
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// According to the regulations of Berland's army, a reconnaissance unit should consist of exactly two soldiers. 
// Since these two soldiers shouldn't differ much, their heights can differ by at most d centimeters. 
// Captain Bob has n soldiers in his detachment. Their heights are a1, a2, ..., an centimeters. 
// Some soldiers are of the same height. Bob wants to know, how many ways exist to form a reconnaissance unit of two soldiers from his detachment.

// Ways (1, 2) and (2, 1) should be regarded as different.

// Input
// The first line contains two integers n and d (1 ≤ n ≤ 1000, 1 ≤ d ≤ 109) — amount of soldiers in Bob's detachment 
// and the maximum allowed height difference respectively. 
// The second line contains n space-separated integers — heights of all the soldiers in Bob's detachment. These numbers don't exceed 109.

// Output
// Output one number — amount of ways to form a reconnaissance unit of two soldiers, whose height difference doesn't exceed d.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, d, a[1001], count = 0;
  cin>>n>>d;
  FOR(i,0,n) {
    cin>>a[i];
  }
  FOR(i,0,n-1) {
    FOR(j,i+1,n) {
      if(abs(a[i] - a[j]) <= d) {
        count += 2;
      }
    }
  }
  cout<<count;
  return 0;
}