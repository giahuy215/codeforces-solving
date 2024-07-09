/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 09-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1983/A
  A. Array Divisibility
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  An array of integers a1,a2,⋯,an is beautiful subject to an integer k if it satisfies the following:

  - The sum of aj over all j such that j is a multiple of k and 1 ≤ j ≤ n, itself, is a multiple of k.
  - More formally, if ∑k | jaj is divisible by k for all 1 ≤ j ≤ n then the array a is beautiful subject to k. Here, the notation k | j means k divides j, that is, j is a multiple of k.
  Given n, find an array of positive nonzero integers, with each element less than or equal to 10^5 that is beautiful subject to all 1 ≤ k ≤ n.
  It can be shown that an answer always exists.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). 
  The description of the test cases follows.

  The first and only line of each test case contains a single integer n (1 ≤ n ≤ 100) — the size of the array.

  Output
  For each test case, print the required array as described in the problem statement.
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
    int a[n] {0};
    for(int i = n; i > 0; i--) {
      if(i * 2 > n) {
        a[i - 1] = i;
      } else {
        int x = i;
        while(x <= n) {
          a[i - 1] += x;
          x += i;
        }
      }
    }
    
    for(int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}