/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1177/problem/B
  B. Digits Sequence (Hard Edition)
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Let's write all the positive integer numbers one after another from 1 without any delimiters (i.e. as a single string). 
  It will be the infinite sequence starting with 123456789101112131415161718192021222324252627282930313233343536...

  Your task is to print the k-th digit of this sequence.

  Input
  The first and only line contains integer k (1 ≤ k ≤ 1e12) — the position to process (1-based index).

  Output
  Print the k-th digit of the resulting infinite sequence.
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll k, n = 1, b = 9, c = 1;
  cin >> k;
  while (k > c * b) {
    k -= c * b;
    c++;
    b *= 10;
    n *= 10;
  }
  n += (k - 1) / c;
  cout << to_string(n)[(k - 1) % c];

  return 0;
}