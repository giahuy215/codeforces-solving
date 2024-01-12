/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1177/problem/A
  A. Digits Sequence (Easy Edition)
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Let's write all the positive integer numbers one after another from 1 without any delimiters (i.e. as a single string). 
  It will be the infinite sequence starting with 123456789101112131415161718192021222324252627282930313233343536...

  Your task is to print the k-th digit of this sequence.

  Input
  The first and only line contains integer k (1 ≤ k ≤ 10000) — the position to process (1-based index).

  Output
  Print the k-th digit of the resulting infinite sequence.
*/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int k;
  string s;
  cin >> k;
  for(int i = 1; i <= k; i++) {
    s += to_string(i);
  }
  cout << s[k - 1];
  return 0;
}