/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1976/problem/B
  B. Increase/Decrease/Copy
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  You are given two integer arrays: array a of length n and array b of length n + 1.

  You can perform the following operations any number of times in any order:

  - choose any element of the array a and increase it by 1;
  - choose any element of the array a and decrease it by 1;
  - choose any element of the array a, copy it and append the copy to the end of the array a.
  Your task is to calculate the minimum number of aforementioned operations (possibly zero) required to transform the array a into the array b. It can be shown that under the constraints of the problem, it is always possible.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  Each test case consists of three lines:

  the first line contains a single integer n (1 ≤ n ≤ 2⋅10^5);
  the second line contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9);
  the third line contains n+1 integers b1,b2,…,bn + 1 (1 ≤ bi ≤ 10^9).
  Additional constraint on the input: the sum of n over all test cases doesn't exceed 2⋅10^5.

  Output
  For each test case, print a single integer — the minimum number of operations (possibly zero) required to transform the array a into the array b.
*/
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll n, ans = 0, mn = 1e18;
    cin >> n;
    int a[n], b[n + 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n + 1; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
      ans += abs(a[i] - b[i]);
      if((b[n] >= a[i] && b[n] <= b[i]) || (b[n] >= b[i] && b[n] <= a[i])) {
        mn = 0;
      } else {
        if(mn > abs(b[n] - b[i])) mn = abs(b[n] - b[i]);
        if(mn > abs(a[i] - b[n])) mn = abs(a[i] - b[n]);
      }
    }
    cout << ans + mn + 1 << "\n";
  }

  return 0;
}