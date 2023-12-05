// https://codeforces.com/contest/723/problem/A
// A. The New Year: Meeting Friends
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, 
// the second friend lives at the point x2, and the third friend lives at the point x3. 
// They plan to celebrate the New Year together, so they need to meet at one point. 
// What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

// It's guaranteed that the optimal answer is always integer.

// Input
// The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates 
// of the houses of the first, the second and the third friends respectively.

// Output
// Print one integer — the minimum total distance the friends need to travel in order to meet together.
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x1,x2,x3;
  cin>>x1>>x2>>x3;
  cout<<max({x1,x2,x3}) - min({x1,x2,x3});

  return 0;
}