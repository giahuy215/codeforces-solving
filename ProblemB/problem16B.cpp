/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/16/B
  B. Burglar and Matches
  time limit per test: 0.5 second
  memory limit per test: 64 megabytes
  input: standard input
  output: standard output

  A burglar got into a matches warehouse and wants to steal as many matches as possible. In the warehouse there are m containers, 
  in the i-th container there are ai matchboxes, and each matchbox contains bi matches. All the matchboxes are of the same size. 
  The burglar's rucksack can hold n matchboxes exactly. Your task is to find out the maximum amount of matches that a burglar can carry away. 
  He has no time to rearrange matches in the matchboxes, that's why he just chooses not more than n matchboxes so that the total amount of matches in them is maximal.

  Input
  The first line of the input contains integer n (1 ≤ n ≤ 2·1e8) and integer m (1 ≤ m ≤ 20). The i + 1-th line contains a pair of numbers ai and bi (1 ≤ ai ≤ 1e8, 1 ≤ bi ≤ 10). 
  All the input numbers are integer.

  Output
  Output the only number — answer to the problem.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m, sum = 0;
  cin >> n >> m;
  pair<int, int> a[m];
  FOR(i, 0, m) {
    cin >> a[i].second >> a[i].first;
  }
  sort(a, a + m, greater<pair<int, int>>());
  FOR(i, 0, m) {
    if(n >= a[i].second) {
      sum += a[i].first * a[i].second;
      n -= a[i].second;
    } else {
      sum += a[i].first * n;
      n = 0;
    }
    if(n == 0) break;
  }
  cout << sum;

  return 0;
}