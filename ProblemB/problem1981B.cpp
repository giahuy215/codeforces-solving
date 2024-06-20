/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1981/problem/B
  B. Turtle and an Infinite Sequence
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  There is a sequence a0,a1,a2,… of infinite length. Initially ai=i for every non-negative integer i.

  After every second, each element of the sequence will simultaneously change. ai will change to ai−1 ∣ ai ∣ ai+1 for every positive integer i. a0 will change to a0 ∣ a1. Here, | denotes bitwise OR.

  Turtle is asked to find the value of an after m seconds. In particular, if m=0, then he needs to find the initial value of an. He is tired of calculating so many values, so please help him!

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

  The first line of each test case contains two integers n,m (0 ≤ n,m ≤ 10^9).

  Output
  For each test case, output a single integer — the value of an after m seconds.
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
    int n, m;
    cin >> n >> m;
    int a = max(0, n - m), b = n + m;
    while(a < b) {
      a |= (a + 1);
    }
    cout << a << "\n";
  }
  
  return 0;
}