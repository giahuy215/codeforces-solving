// https://codeforces.com/problemset/problem/681/A
// A. A Good Contest
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Codeforces user' handle color depends on his rating — it is red if his rating is greater or equal to 2400; 
// it is orange if his rating is less than 2400 but greater or equal to 2200, etc. Each time participant takes part in a rated contest, 
// his rating is changed depending on his performance.

// Anton wants the color of his handle to become red. He considers his performance in the rated contest to be good if he outscored some participant, 
// whose handle was colored red before the contest and his rating has increased after it.

// Anton has written a program that analyses contest results and determines whether he performed good or not. Are you able to do the same?

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of participants Anton has outscored in this contest .

// The next n lines describe participants results: the i-th of them consists of a participant handle namei 
// and two integers beforei and afteri ( - 4000 ≤ beforei, afteri ≤ 4000) — participant's rating before and after the contest, respectively. 
// Each handle is a non-empty string, consisting of no more than 10 characters, which might be lowercase and uppercase English letters, 
// digits, characters «_» and «-» characters.

// It is guaranteed that all handles are distinct.

// Output
// Print «YES» (quotes for clarity), if Anton has performed good in the contest and «NO» (quotes for clarity) otherwise.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, cnt = 0;
  cin >> n;
  while (n--) {
    int a, b;
    string s;
    cin >> s >> a >> b;
    if(a >= 2400 && b > a) {
      cnt++;
    }
  }
  if(cnt > 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  

  return 0;
}