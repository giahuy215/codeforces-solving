// https://codeforces.com/contest/1890/problem/A
// A. Doremy's Paint 3
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// An array b1,b2,…,bn of positive integers is good if all the sums of two adjacent elements are equal to the same value. 
// More formally, the array is good if there exists a k such that b1 + b2 = b2 + b3 = … = b(n−1) + bn = k.

// Doremy has an array a of length n. Now Doremy can permute its elements (change their order) however she wants. 
// Determine if she can make the array good.

// Input
// The input consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 100) — the number of test cases. 
// The description of the test cases follows.

// The first line of each test case contains a single integer n (2 ≤ n ≤ 100) — the length of the array a.

// The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 1e5).

// There are no constraints on the sum of n over all test cases.

// Output
// For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, cnt = 1, b = 0, c = 1;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    sort(a, a + n);
    FOR(i, 1, n) {
      if(a[i] == a[i - 1]) {
        cnt++;
      } else {
        c++;
        b = cnt;
        cnt = 1;
      }
      if(c > 2) {
        cout << "NO" << "\n";
        break;
      }
    }
    b = cnt;
    if(c == 1) {
      cout << "YES" << "\n";
    }
    if(c == 2) {
      int d = n - b;
      if(abs(b - d) <= 1) {
        cout << "YES" << "\n";
      } else {
        cout << "NO" << "\n";
      }
    }
  }

  return 0;
}