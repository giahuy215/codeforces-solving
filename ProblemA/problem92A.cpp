// https://codeforces.com/problemset/problem/92/A
// A. Chips
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// There are n walruses sitting in a circle. All of them are numbered in the clockwise order: 
// the walrus number 2 sits to the left of the walrus number 1, the walrus number 3 sits to the left of the walrus number 2, ...,
// the walrus number 1 sits to the left of the walrus number n.

// The presenter has m chips. The presenter stands in the middle of the circle and starts giving the chips to the walruses starting from walrus number 1 and moving clockwise. 
// The walrus number i gets i chips. If the presenter can't give the current walrus the required number of chips,
// then the presenter takes the remaining chips and the process ends. Determine by the given n and m how many chips the presenter will get in the end.

// Input
// The first line contains two integers n and m (1 ≤ n ≤ 50, 1 ≤ m ≤ 10^4) — the number of walruses and the number of chips correspondingly.

// Output
// Print the number of chips the presenter ended up with.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin>>n>>m;
  FOR(i,1,n+1) {
    if(m < i) {
      cout<<m;
      break;
    }
    if(m >= i) {
      m = m - i;
    }
    if(i == n) {
      i = 0;
    }
  }

  return 0;
}