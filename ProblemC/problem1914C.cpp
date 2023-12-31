/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1914/C
  C. Quests
  time limit per test: 2.5 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Monocarp is playing a computer game. In order to level up his character, he can complete quests. 
  There are n quests in the game, numbered from 1 to n.

  Monocarp can complete quests according to the following rules:

  - the 1-st quest is always available for completion;
  - the i-th quest is available for completion if all quests j < i have been completed at least once.
  Note that Monocarp can complete the same quest multiple times.

  For each completion, the character gets some amount of experience points:

  - for the first completion of the i-th quest, he gets ai experience points;
  - for each subsequent completion of the i-th quest, he gets bi experience points.
  Monocarp is a very busy person, so he has free time to complete no more than k quests. 
  Your task is to calculate the maximum possible total experience Monocarp can get if he can complete no more than k quests.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases.

  The first line of each test case contains two integers n and k (1 ≤ n ≤ 2⋅1e5; 1 ≤ k ≤ 2⋅1e5) — the number of quests and the maximum number of quests Monocarp can complete, respectively.

  The second line contains n integers a1,a2,…,an (1 ≤ ai ≤ 1e3).

  The third line contains n integers b1,b2,…,bn (1 ≤ bi ≤ 1e3).

  Additional constraint on the input: the sum of n over all test cases does not exceed 2⋅1e5.

  Output
  For each test case, print a single integer — the maximum possible total experience Monocarp can get if he can complete no more than k quests.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, sum = 0, mx = 0, ans = 0;
    cin >> n >> k;
    int a[n], b[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    FOR(i, 0, n) {
      cin >> b[i];
    }
    FOR(i, 0, min(n, k)) {
      sum += a[i];
      mx = max(mx, b[i]);
      ans = max (ans, sum + mx * (k - i - 1));
    }
    cout << ans << endl;
  }

  return 0;
}