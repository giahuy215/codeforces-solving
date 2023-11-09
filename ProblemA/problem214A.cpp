// https://codeforces.com/problemset/problem/214/A 
// A. System of Equations
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Furik loves math lessons very much, so he doesn't attend them, unlike Rubik. But now Furik wants to get a good mark for math. 
// For that Ms. Ivanova, his math teacher, gave him a new task. Furik solved the task immediately. Can you?

// You are given a system of equations: {a^2 + b = n; a + b^2 = m}

// You should count, how many there are pairs of integers (a, b) (0 ≤ a, b) which satisfy the system.

// Input
// A single line contains two integers n, m (1 ≤ n, m ≤ 1000) — the parameters of the system. The numbers on the line are separated by a space.

// Output
// On a single line print the answer to the problem.
#include<iostream>
#include<math.h>

using namespace std;

int main() {
  int n, m;
  int count = 0;
  cin>>n>>m;

  for(int i = 0; i <= sqrt(n) && i <= m; i++) {
      int j = n - pow(i,2);
      if(i + pow(j,2) == m) {
        count++;
      }
  }

  cout<<count;

  return 0;
}