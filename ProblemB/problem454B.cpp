/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/454/problem/B
  B. Little Pony and Sort by Shift
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  One day, Twilight Sparkle is interested in how to sort a sequence of integers a1, a2, ..., an in non-decreasing order. 
  Being a young unicorn, the only operation she can perform is a unit shift. That is, she can move the last element of the sequence to its beginning:

  - a1, a2, ..., an → an, a1, a2, ..., an - 1.
  Help Twilight Sparkle to calculate: what is the minimum number of operations that she needs to sort the sequence?

  Input
  The first line contains an integer n (2 ≤ n ≤ 1e5). The second line contains n integer numbers a1, a2, ..., an (1 ≤ ai ≤ 1e5).

  Output
  If it's impossible to sort the sequence output -1. Otherwise output the minimum number of operations Twilight Sparkle needs to sort it.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, cnt = 0, s;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    if(a[i] < a[i - 1] && i != 0) {
      cnt++;
      s = i;
    }
  }
  if(cnt == 0) cout << 0;
  else if(cnt == 1 && a[0] >= a[n - 1]) cout << n - s;
  else cout << -1;

  return 0;
}