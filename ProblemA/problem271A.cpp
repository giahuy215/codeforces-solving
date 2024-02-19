/*
  Author : Nguyen Duc Gia Huy
*/
/*
  A. Beautiful Year
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

  Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

  Input
  The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

  Output
  Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
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
  int n;
  cin >> n;
  while (n++)
  {
    string s = to_string(n);
    if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
    {
      cout << s << endl;
      return 0;
    }
  }
  

  return 0;
}