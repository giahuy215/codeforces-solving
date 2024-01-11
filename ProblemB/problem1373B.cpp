/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1373/B
  B. 01 Game
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Alica and Bob are playing a game.

  Initially they have a binary string s consisting of only characters 0 and 1.

  Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on. 
  During each move, the current player must choose two different adjacent characters of string s and delete them. 
  For example, if s = 1011001 then the following moves are possible:

  delete s1 and s2: 1011001 → 11001;
  delete s2 and s3: 1011001 → 11001;
  delete s4 and s5: 1011001 → 10101;
  delete s6 and s7: 1011001 → 10110.
  If a player can't make any move, they lose. Both players play optimally. You have to determine if Alice can win.

  Input
  First line contains one integer t (1 ≤ t ≤1000) — the number of test cases.

  Only line of each test case contains one string s (1 ≤ |s| ≤ 100), consisting of only characters 0 and 1.

  Output
  For each test case print answer in the single line.

  If Alice can win print DA (YES in Russian) in any register. Otherwise print NET (NO in Russian) in any register.
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
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int cnta = 0, cntb = 0;
    FOR(i, 0, s.size()) {
      if(s[i] == '0') cnta++;
      else cntb++;
    }
    if((min(cnta, cntb) & 1)) cout << "DA" << endl;
    else cout << "NET" << endl;
    
  }

  return 0;
}