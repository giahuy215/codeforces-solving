/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 05-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1987/A
  A. Upload More RAM
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Oh no, the ForceCodes servers are running out of memory! Luckily, you can help them out by uploading some of your RAM!

  You want to upload n GBs of RAM. Every second, you will upload either 0 or 1 GB of RAM. 
  However, there is a restriction on your network speed: in any k consecutive seconds, you can upload only at most 1 GB of RAM in total.

  Find the minimum number of seconds needed to upload n GBs of RAM!

  Input
  Each test contains multiple test cases. The first line of input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. The description of the test cases follows.

  The first and only line of each test case contains two integers n and k (1 ≤ n,k ≤ 100) — the number of GBs that you want to upload and the length of the time window respectively.

  Output
  For each test case, output a single integer — the minimum number of seconds needed to upload n GBs of RAM.
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
    int n, k;
    cin >> n >> k;
    cout << (n - 1) * k + 1 << "\n";
  }
  
  return 0;
}