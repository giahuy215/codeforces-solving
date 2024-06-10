/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1980/A
  A. Problem Generator
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Vlad is planning to hold m rounds next month. Each round should contain one problem of difficulty levels 'A', 'B', 'C', 'D', 'E', 'F', and 'G'.

  Vlad already has a bank of n problems, where the i-th problem has a difficulty level of ai.
  There may not be enough of these problems, so he may have to come up with a few more problems.

  Vlad wants to come up with as few problems as possible, so he asks you to find the minimum number of problems he needs to come up with in order to hold m rounds.

  For example, if m=1, n=10, a= 'BGECDCBDED', then he needs to come up with two problems: one of difficulty level 'A' and one of difficulty level 'F'.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

  The first line of each test case contains two integers n and m (1 ≤ n ≤ 50, 1 ≤ m ≤ 5) — the number of problems in the bank and the number of upcoming rounds, respectively.

  The second line of each test case contains a string a of n characters from 'A' to 'G' — the difficulties of the problems in the bank.

  Output
  For each test case, output a single integer — the minimum number of problems that need to come up with to hold m rounds.
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
    int n, m, cnt = 0;
    string s;
    cin >> n >> m >> s;
    map<char, int> mp;
    mp.insert({'A', 0});
    mp.insert({'B', 0});
    mp.insert({'C', 0});
    mp.insert({'D', 0});
    mp.insert({'E', 0});
    mp.insert({'F', 0});
    mp.insert({'G', 0});

    FOR(i, 0, n)
    {
      mp[s[i]]++;
    }
    for (auto x : mp)
    {
      if (x.second < m)
        cnt += m - x.second;
    }
    cout << cnt << endl;
  }

  return 0;
}