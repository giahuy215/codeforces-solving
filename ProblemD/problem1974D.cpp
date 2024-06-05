/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1974/D
  D. Ingenuity-2
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Let's imagine the surface of Mars as an infinite coordinate plane. 
  Initially, the rover Perseverance-2 and the helicopter Ingenuity-2 are located at the point with coordinates (0,0). 
  A set of instructions s consisting of n instructions of the following types was specially developed for them:

  - N: move one meter north (from point (x,y) to (x,y+1));
  - S: move one meter south (from point (x,y) to (x,y−1));
  - E: move one meter east (from point (x,y) to (x+1,y));
  - W: move one meter west (from point (x,y) to (x−1,y)).
  Each instruction must be executed either by the rover or by the helicopter. Moreover, each device must execute at least one instruction. 
  Your task is to distribute the instructions in such a way that after executing all n instructions, the helicopter and the rover end up at the same point, or determine that this is impossible.

  Input
  The first line of input contains t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅10^5) — the number of instructions.

  The second line of each test case contains a string s of length n consisting of the characters 'N', 'S', 'E', 'W' — the sequence of instructions.

  It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, if the required distribution of instructions exists, output a string p of length n consisting of the characters 'R', 'H'. 
  If the i-th operation should be executed by the rover, then pi=R, if the i-th operation should be executed by the helicopter, then pi=H. If there are multiple solutions, output any of them.

  Otherwise, output NO.
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
  while(t--) {
    int n;
    string s;
    cin >> n >> s;
    if(n % 2 == 1 || (n == 2 && s[0] != s[1])) {
      cout << "NO" << endl;
      continue;
    }
    map<char, int> mp;
    mp['N'] = 0;
    mp['S'] = 0;
    mp['E'] = 0;
    mp['W'] = 0;
    FOR(i, 0, n) {
      mp[s[i]]++;
    }
    if(abs(mp['N'] - mp['S']) % 2 == 0 && abs(mp['E'] - mp['W']) % 2 == 0) {
      FOR(i, 0, n) {
        if(s[i] == 'N' || s[i] == 'S') {
          cout << (mp[s[i]] % 2 == 0 ? "R" : "H");
        } else {
          cout << (mp[s[i]] % 2 == 0 ? "H" : "R");
        }
        mp[s[i]]--;
      }
      cout << endl;
    } else cout << "NO" << endl;
  }
  
  return 0;
}