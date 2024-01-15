/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1337/problem/A
  A. Ichihime and Triangle
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Ichihime is the current priestess of the Mahjong Soul Temple. She claims to be human, despite her cat ears.

  These days the temple is holding a math contest. Usually, Ichihime lacks interest in these things, but this time the prize for the winner is her favorite — cookies. 
  Ichihime decides to attend the contest. Now she is solving the following problem.
  
  You are given four positive integers a, b, c, d, such that a ≤ b ≤ c ≤ d.

  Your task is to find three integers x, y, z, satisfying the following conditions:
  - a ≤ x ≤ b.
  - b ≤ y ≤ c.
  - c ≤ z ≤ d.
  - There exists a triangle with a positive non-zero area and the lengths of its three sides are x, y, and z.
  Ichihime desires to get the cookie, but the problem seems too hard for her. Can you help her?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000)  — the number of test cases.

  The next t lines describe test cases. Each test case is given as four space-separated integers a, b, c, d (1 ≤ a ≤ b ≤ c ≤ d ≤ 1e9).

  Output
  For each test case, print three integers x, y, z  — the integers you found satisfying the conditions given in the statement.

  It is guaranteed that the answer always exists. If there are multiple answers, print any.
*/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << b << " " << c << " " << c << endl;
  }

  return 0;
}