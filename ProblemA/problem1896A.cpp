/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1896/problem/A
  A. Jagged Swaps
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a permutation† a of size n. You can do the following operation

  Select an index i from 2 to n−1 such that ai − 1 < ai and ai > ai + 1. Swap ai and ai+1.
  Determine whether it is possible to sort the permutation after a finite number of operations.

  † A permutation is an array consisting of n distinct integers from 1 to n in arbitrary order. 
  For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 5000). Description of the test cases follows.

  The first line of each test case contains a single integer n (3 ≤ n ≤ 10) — the size of the permutation.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ n) — the elements of permutation a.

  Output
  For each test case, print "YES" if it is possible to sort the permutation, and "NO" otherwise.

  You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as positive answer).
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, cnt = 0;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    FOR(i, 1, n - 1) {
      if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        i = 0;
      }
    }
    FOR(i, 1, n) {
      if(a[i] <= a[i - 1]) {
        cout << "NO" << endl;
        cnt++;
        break;
      }
    }
    if(cnt == 0) cout << "YES" << endl;
  }

  return 0;
}