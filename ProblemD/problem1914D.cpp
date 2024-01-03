/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1914/D
  D. Three Activities
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Winter holidays are coming up. They are going to last for n days.

  During the holidays, Monocarp wants to try all of these activities exactly once with his friends:

  - go skiing;
  - watch a movie in a cinema;
  - play board games.

  Monocarp knows that, on the i-th day, exactly ai friends will join him for skiing, bi friends will join him for a movie and ci friends will join him for board games.

  Monocarp also knows that he can't try more than one activity in a single day.

  Thus, he asks you to help him choose three distinct days x,y,z in such a way that the total number of friends to join him for the activities (ax + by + cz) is maximized.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of testcases.

  The first line of each testcase contains a single integer n (3 ≤ n ≤ 1e5) — the duration of the winter holidays in days.

  The second line contains n integers a1,a2,…,an (1 ≤ ai ≤ 1e8) — the number of friends that will join Monocarp for skiing on the i-th day.

  The third line contains n integers b1,b2,…,bn (1 ≤ bi ≤ 1e8) — the number of friends that will join Monocarp for a movie on the i-th day.

  The fourth line contains n integers c1,c2,…,cn (1 ≤ ci ≤ 1e8) — the number of friends that will join Monocarp for board games on the i-th day.

  The sum of n over all testcases doesn't exceed 1e5.

  Output
  For each testcase, print a single integer — the maximum total number of friends that can join Monocarp for the activities on three distinct days.
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
  while (t--) {
    int n, ans = 0;
    cin >> n;
    pair<int, int> a[n], b[n], c[n];
    FOR(i, 0, n) {
      cin >> a[i].first;
      a[i].second = i;
    }
    FOR(i, 0, n) {
      cin >> b[i].first;
      b[i].second = i;
    }
    FOR(i, 0, n) {
      cin >> c[i].first;
      c[i].second = i;
    }
    sort(a, a + n, greater<pair<int, int>>());
    sort(b, b + n, greater<pair<int, int>>());
    sort(c, c + n, greater<pair<int, int>>());

    FOR(i, 0, 3) {
      FOR(j, 0, 3) {
        FOR(k, 0, 3) {
          if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) {
            ans = max(ans, a[i].first + b[j].first + c[k].first);
          }
        }
      }
    }
    cout << ans << "\n";
  }

  return 0;
}