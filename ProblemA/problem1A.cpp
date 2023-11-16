// https://codeforces.com/contest/1/problem/A
// A. Theatre Square
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. 
// On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. 
// Each flagstone is of the size a × a.

// What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, 
// but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

// Input
// The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

// Output
// Write the needed number of flagstones.
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n,m,a;
  cin>>n>>m>>a;
  ll b = (n+a-1)/a*((m+a-1)/a);
  cout<<b;
  return 0;
}