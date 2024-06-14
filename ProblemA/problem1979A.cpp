/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1979/problem/A
  A. Guess the Maximum
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Alice and Bob came up with a rather strange game. They have an array of integers a1,a2,…,an. 
  Alice chooses a certain integer k and tells it to Bob, then the following happens:

  - Bob chooses two integers i and j (1 ≤ i<j ≤ n), and then finds the maximum among the integers ai,ai+1,…,aj;
  - If the obtained maximum is strictly greater than k, Alice wins, otherwise Bob wins.
  Help Alice find the maximum k at which she is guaranteed to win.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. The description of the test cases follows.

  The first line of each test case contains a single integer n (2 ≤ n ≤ 5⋅10^4) — the number of elements in the array.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9) — the elements of the array.

  It is guaranteed that the sum of n over all test cases does not exceed 5⋅10^4.

  Output
  For each test case, output one integer — the maximum integer k at which Alice is guaranteed to win.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = max(a[0], a[1]);
    for(int i = 1; i < n - 1; i++) {
      ans = min(ans, max(a[i], a[i + 1]));
    }
    cout << ans - 1 << "\n";

  }
  
  return 0;
}