// https://codeforces.com/problemset/problem/34/A
// A. Reconnaissance 2
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// n soldiers stand in a circle. For each soldier his height ai is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. |ai - aj| is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

// Input
// The first line contains integer n (2 ≤ n ≤ 100) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 1000). The soldier heights are given in clockwise or counterclockwise direction.

// Output
// Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, a[101], min = 1001, p = 0, b = 0, c = 0;
  cin>>n;
  FOR(i,1,n + 1) {
    cin>>a[i];
  }
  FOR(i,1,n + 1) {
    if(i == n) {
      p = abs(a[i] - a[1]);
    } else {
      p = abs(a[i] - a[i+1]);
    }
    if(p < min) {
      min = p;
      b = i;
      c = i + 1;
      if(i == n) c = 1;
    }
  }
  cout<<b<<" "<<c;
  return 0;
}