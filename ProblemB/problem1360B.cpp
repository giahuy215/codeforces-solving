/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1360/B
  B. Honest Coach
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  There are n athletes in front of you. Athletes are numbered from 1 to n from left to right. You know the strength of each athlete — the athlete number i has the strength si.

  You want to split all athletes into two teams. Each team must have at least one athlete, and each athlete must be exactly in one team.

  You want the strongest athlete from the first team to differ as little as possible from the weakest athlete from the second team. 
  Formally, you want to split the athletes into two teams A and B so that the value |max(A) − min(B)| is as small as possible, 
  where max(A) is the maximum strength of an athlete from team A, and min(B) is the minimum strength of an athlete from team B.

  For example, if n = 5 and the strength of the athletes is s=[3,1,2,6,4], then one of the possible split into teams is:

  - first team: A=[1,2,4],
  - second team: B=[3,6].

  In this case, the value |max(A) − min(B)| will be equal to |4 − 3|=1. This example illustrates one of the ways of optimal split into two teams.

  Print the minimum value |max(A) − min(B)|.

  Input
  The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases in the input. Then t test cases follow.

  Each test case consists of two lines.

  The first line contains positive integer n (2 ≤ n ≤ 50) — number of athletes.

  The second line contains n positive integers s1,s2,…,sn (1 ≤ si ≤ 1000), where si — is the strength of the i-th athlete. 
  Please note that s values may not be distinct.

  Output
  For each test case print one integer — the minimum value of |max(A) − min(B)| with the optimal split of all athletes into two teams. 
  Each of the athletes must be a member of exactly one of the two teams.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
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
    int n, min = 1e5;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    sort(a, a + n);
    FOR(i, 1, n) {
      if(a[i] - a[i - 1] < min) {
        min = a[i] - a[i - 1];
      }
    }
    cout << min << endl;
  }

  return 0;
}