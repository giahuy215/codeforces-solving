/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1325/B
  B. CopyCopyCopyCopyCopy
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Ehab has an array a of length n. He has just enough free time to make a new array consisting of n copies of the old array, 
  written back-to-back. What will be the length of the new array's longest increasing subsequence ?

  A sequence a is a subsequence of an array b if a can be obtained from b by deletion of several (possibly, zero or all) elements. 
  The longest increasing subsequence of an array is the longest subsequence such that its elements are ordered in strictly increasing order.

  Input
  The first line contains an integer t — the number of test cases you need to solve. The description of the test cases follows.

  The first line of each test case contains an integer n (1 ≤ n ≤ 1e5) — the number of elements in the array a.

  The second line contains n space-separated integers a1, a2, …, an (1 ≤ ai ≤ 1e9) — the elements of the array a.

  The sum of n across the test cases doesn't exceed 1e5.

  Output
  For each testcase, output the length of the longest increasing subsequence of a if you concatenate it to itself n times.
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
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    FOR(i, 0, n) {
     cin >> a[i];
     s.insert(a[i]);
    }
    cout << s.size() << endl;
  }

  return 0;
}