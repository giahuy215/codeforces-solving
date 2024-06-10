/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1980/problem/B
  B. Choosing Cubes
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Dmitry has n cubes, numbered from left to right from 1 to n. The cube with index f is his favorite.

  Dmitry threw all the cubes on the table, and the i-th cube showed the value ai (1 ≤ ai ≤ 100). After that, he arranged the cubes in non-increasing order of their values, from largest to smallest. 
  If two cubes show the same value, they can go in any order.

  After sorting, Dmitry removed the first k cubes. Then he became interested in whether he removed his favorite cube (note that its position could have changed after sorting).

  For example, if n=5, f=2, a=[4,3,3,2,3] (the favorite cube is highlighted in green), and k=2, the following could have happened:

  - After sorting a=[4,3,3,3,2], since the favorite cube ended up in the second position, it will be removed.
  - After sorting a=[4,3,3,3,2], since the favorite cube ended up in the third position, it will not be removed.
  
  Input
  The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases. Then follow the descriptions of the test cases.

  The first line of each test case description contains three integers n, f, and k (1 ≤ f,k ≤ n ≤ 100) — the number of cubes, the index of Dmitry's favorite cube, and the number of removed cubes, respectively.

  The second line of each test case description contains n integers ai (1 ≤ ai ≤ 100) — the values shown on the cubes.

  Output
  For each test case, output one line — "YES" if the cube will be removed in all cases, "NO" if it will not be removed in any case, "MAYBE" if it may be either removed or left.

  You can output the answer in any case. For example, the strings "YES", "nO", "mAyBe" will be accepted as answers.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b - 1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, f, k;
    cin >> n >> f >> k;
    pair<int, int> p[n];
    FOR(i, 0, n) {
      cin >> p[i].first;
      p[i].second = i + 1;
    }

    sort(p, p + n, greater<pair<int, int>>());
    // for(auto x: p) cout << x.first << " " << x.second << endl;
    FOR(i, 0, n) {
      if(p[i].second == f) {
        if(k - 1 >= i && p[k].first != p[i].first) {
          cout << "YES" << endl;
        } else if(k - 1 >= i && p[k].first == p[i].first) {
          cout << "MAYBE" << endl;
        } else if(i > k - 1 && p[k - 1].first == p[i].first) {
          cout << "MAYBE" << endl;
        } else cout << "NO" << endl;

        break;
      } 
    }
  }

  return 0;
}