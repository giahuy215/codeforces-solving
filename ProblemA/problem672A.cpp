// https://codeforces.com/problemset/problem/672/A
// A. Summer Camp
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Every year, hundreds of people come to summer camps, they learn new algorithms and solve hard problems.

// This is your first year at summer camp, and you are asked to solve the following problem. 
// All integers starting with 1 are written in one line. The prefix of these line is "123456789101112131415...". 
// Your task is to print the n-th digit of this string (digits are numbered starting with 1).

// Input
// The only line of the input contains a single integer n (1 ≤ n ≤ 1000) — the position of the digit you need to print.

// Output
// Print the n-th digit of the line.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

char bns(string s, int l, int r, int x) {
  int m = (l + r) / 2;
  if(m = x) return s[x - 1];
  if(m > x) 
    return bns(s, l, m - 1, x);
  else 
    return bns(s, m + 1, r, x);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  string s;
  FOR(i, 1, n + 1) {
    s += to_string(i);
  }
  cout<<bns(s, 0, s.length(), n);
  
  return 0;
}