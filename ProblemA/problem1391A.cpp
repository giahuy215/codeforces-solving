/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1391/problem/A
  A. Suborrays
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. 
  For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

  For a positive integer n, we call a permutation p of length n good if the following condition holds 
  for every pair i and j (1 ≤ i ≤ j ≤ n) — (pi OR pi + 1 OR … OR pj − 1 OR pj) ≥ j − i + 1, where OR denotes the bitwise OR operation.
  In other words, a permutation p is good if for every subarray of p, the OR of all elements in it is not less than the number of elements in that subarray.

  Given a positive integer n, output any good permutation of length n. We can show that for the given constraints such a permutation always exists.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). Description of the test cases follows.

  The first and only line of every test case contains a single integer n (1 ≤ n ≤ 100).

  Output
  For every test, output any good permutation of length n on a separate line.
*/
#include <bits/stdc++.h>

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
    for(int i = n; i >= 1; i--) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}