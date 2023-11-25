// https://codeforces.com/problemset/problem/47/A
// A. Triangular numbers
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// A triangular number is the number of dots in an equilateral triangle uniformly filled with dots. 
// For example, three dots can be arranged in a triangle; thus three is a triangular number. 
// The n-th triangular number is the number of dots in a triangle with n dots on a side. Tn = n*(n+1)/2 . 
// You can learn more about these numbers from Wikipedia (http://en.wikipedia.org/wiki/Triangular_number).

// Your task is to find out if a given integer is a triangular number.

// Input
// The first line contains the single number n (1 ≤ n ≤ 500) — the given integer.

// Output
// If the given integer is a triangular number output YES, otherwise output NO.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  FOR(i,1,n+1) {
    if(i*(i+1)/2 == n) {
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";
  return 0;
}