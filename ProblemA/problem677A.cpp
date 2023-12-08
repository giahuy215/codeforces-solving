// https://codeforces.com/problemset/problem/677/A
// A. Vanya and Fence
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. 
// In order to achieve this the height of each of the friends should not exceed h. 
// If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard. 
// The height of the i-th person is equal to ai.

// Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. 
// Friends want to talk to each other while walking, so they would like to walk in a single row. 
// What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?

// Input
// The first line of the input contains two integers n and h (1 ≤ n ≤ 1000, 1 ≤ h ≤ 1000) — the number of friends and the height of the fence, respectively.

// The second line contains n integers ai (1 ≤ ai ≤ 2h), the i-th of them is equal to the height of the i-th person.

// Output
// Print a single integer — the minimum possible valid width of the road.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, h, sum = 0;
  cin >> n >> h;
  int a[n];
  FOR(i,0,n) {
    cin >> a[i];
    if(a[i] > h) {
      sum += 2;
    } else {
      sum += 1;
    }
  }
  cout << sum;

  return 0;
}