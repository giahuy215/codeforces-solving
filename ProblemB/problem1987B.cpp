/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 05-07-2024
*/
/*
  https://codeforces.com/contest/1987/problem/B
  B. K-Sort
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given an array of integers a of length n.

  You can apply the following operation any number of times (maybe, zero):

  - First, choose an integer k such that 1 ≤ k ≤ n and pay k+1 coins.
  - Then, choose exactly k indices such that 1 ≤ i1 < i2 < … < ik ≤ n.
  - Then, for each x from 1 to k, increase aix by 1.
  Find the minimum number of coins needed to make a non-decreasing. That is, a1 ≤ a2 ≤ … ≤ an.

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. 
  The description of the test cases follows.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 10^5) — the length of the array a.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9) — the elements of the array a.

  It is guaranteed that the sum of n over all test cases does not exceed 10^5.

  Output
  For each test case, output a single integer — the minimum number of coins needed to make a non-decreasing.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    ll n, sum = 0, mx = 0;
    cin >> n;
    ll a[n];
    FOR(i, 0, n) cin >> a[i];
    FOR(i, 1, n) {
      if(a[i] < a[i - 1]) {
        sum += a[i - 1] - a[i];
        mx = max(mx, a[i - 1] - a[i]);
        a[i] = a[i - 1];
      }
    }
    cout << sum + mx << endl;
  }
  
  return 0;
}