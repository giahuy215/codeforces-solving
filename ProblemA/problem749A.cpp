// https://codeforces.com/problemset/problem/749/A
// A. Bachgold Problem
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Bachgold problem is very easy to formulate. Given a positive integer n represent it as a sum of maximum possible number of prime numbers. 
// One can prove that such representation exists for any integer greater than 1.

// Recall that integer k is called prime if it is greater than 1 and has exactly two positive integer divisors — 1 and k.

// Input
// The only line of the input contains a single integer n (2 ≤ n ≤ 100 000).

// Output
// The first line of the output contains a single integer k — maximum possible number of primes in representation.

// The second line should contain k primes with their sum equal to n. You can print them in any order. 
// If there are several optimal solution, print any of them.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  if(n % 2 == 0) {
    cout<<n/2<<endl;
    FOR(i,0,n/2) {
      cout<<2<<" ";
    }
  } else {
    cout<<n/2<<endl;
    FOR(i,0,n/2 - 1) {
      cout<<2<<" ";
    }
    cout<<3;
  }

  return 0;
}