/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1351/problem/C
  C. Skier
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Skier rides on a snowy field. Its movements can be described by a string of characters 'S', 'N', 'W', 'E' (which correspond to 1 meter movement in the south, north, west or east direction respectively).

  It is known that if he moves along a previously unvisited segment of a path (i.e. this segment of the path is visited the first time), 
  then the time of such movement is 5 seconds. If he rolls along previously visited segment of a path (i.e., this segment of the path has been covered by his path before), then it takes 1 second.

  Find the skier's time to roll all the path.

  Input
  The first line contains an integer t (1 ≤ t ≤ 1e4) — the number of test cases in the input. Then t test cases follow.

  Each set is given by one nonempty string of the characters 'S', 'N', 'W', 'E'. The length of the string does not exceed 1e5 characters.

  The sum of the lengths of t given lines over all test cases in the input does not exceed 1e5.

  Output
  For each test case, print the desired path time in seconds.
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
    set<pair<pair<int, int>, pair<int, int>>> mp;
    int a = 0, b = 0;
    FOR(i, 0, s.size()) {
      if(s[i] == 'N') {
        mp.insert({{a, b},{a, b + 1}});
        mp.insert({{a, b + 1},{a, b}});
        b++;
      } else if(s[i] == 'S') {
        mp.insert({{a, b - 1}, {a, b}});
        mp.insert({{a, b}, {a, b - 1}});
        b--;
      } else if(s[i] == 'E') {
        mp.insert({{a, b}, {a + 1, b}});
        mp.insert({{a + 1, b}, {a, b}});
        a++;
      } else {
        mp.insert({{a - 1, b}, {a, b}});
        mp.insert({{a, b}, {a - 1, b}});
        a--;
      }
    }
    cout << (mp.size() / 2) * 5 + (s.size() - (mp.size() / 2)) << endl;
  }

  return 0;
}