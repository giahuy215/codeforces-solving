// https://codeforces.com/problemset/problem/432/A
// A. Choosing Teams
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// The Saratov State University Olympiad Programmers Training Center (SSU OPTC) has n students. 
// For each student you know the number of times he/she has participated in the ACM ICPC world programming championship. 
// According to the ACM ICPC rules, each person can participate in the world championship at most 5 times.

// The head of the SSU OPTC is recently gathering teams to participate in the world championship. 
// Each team must consist of exactly three people, at that, any person cannot be a member of two or more teams. 
// What maximum number of teams can the head make if he wants each team to participate in the world championship with the same members at least k times?

// Input
// The first line contains two integers, n and k (1 ≤ n ≤ 2000; 1 ≤ k ≤ 5). The next line contains n integers: y1, y2, ..., yn (0 ≤ yi ≤ 5), 
// where yi shows the number of times the i-th person participated in the ACM ICPC world championship.

// Output
// Print a single number — the answer to the problem.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, k, cnt = 0;
  cin >> n >> k;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    if(5 - a[i] >= k) {
      cnt++;
    }
  }
  cout << cnt / 3;

  return 0;
}