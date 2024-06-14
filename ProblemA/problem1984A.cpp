/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1984/problem/A
  A. Strange Splitting
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Define the range of a non-empty array to be the maximum value minus the minimum value. For example, the range of [1,4,2] is 4−1=3.

  You are given an array a1,a2,…,an of length n ≥ 3. It is guaranteed a is sorted.

  You have to color each element of a red or blue so that:

  - the range of the red elements does not equal the range of the blue elements, and
  - there is at least one element of each color.
  If there does not exist any such coloring, you should report it. If there are multiple valid colorings, you can print any of them.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 100) — the number of test cases.

  The first line of each test case contains an integer n (3 ≤ n ≤ 50) — the length of the array.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9). It is guaranteed a1 ≤ a2 ≤ … ≤ an−1 ≤ an.

  Output
  For each test case, if it is impossible to color a to satisfy all the constraints, output NO.

  Otherwise, first output YES.

  Then, output a string s of length n. For 1 ≤ i ≤ n, if you color ai red, si should be R. For 1 ≤ i ≤ n, if you color ai blue, si should be B.
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
    for(int i = 0; i < n; i++) cin >> a[i];
    if(a[0] == a[n - 1]) cout << "NO\n";
    else {
      cout << "YES\n";
      for(int i = 0; i < n; i++) {
        if(i == 1) cout << "R";
        else cout << "B";
      }
      cout << "\n";
    }
  }
  
  return 0;
}