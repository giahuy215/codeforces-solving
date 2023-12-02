// https://codeforces.com/problemset/problem/755/A
// A. PolandBall and Hypothesis
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// PolandBall is a young, clever Ball. He is interested in prime numbers. He has stated a following hypothesis:
// "There exists such a positive integer n that for each positive integer m number n·m + 1 is a prime number".

// Unfortunately, PolandBall is not experienced yet and doesn't know that his hypothesis is incorrect. 
// Could you prove it wrong? Write a program that finds a counterexample for any n.

// Input
// The only number in the input is n (1 ≤ n ≤ 1000) — number from the PolandBall's hypothesis.

// Output
// Output such m that n·m + 1 is not a prime number. Your answer will be considered correct 
// if you output any suitable m such that 1 ≤ m ≤ 10^3. It is guaranteed the the answer exists.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int prime(int n) {
  if(n < 2) return 0;
  if(n == 2 || n == 3) return 1;
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) return 0;
  }
  return 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  FOR(i, 1, 101) {
    if(!prime(n*i + 1)) {
      cout<<i;
      return 0;
    }
  }

  return 0;
}