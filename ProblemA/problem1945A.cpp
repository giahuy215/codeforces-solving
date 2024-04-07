/*
  Author : Nguyen Duc Gia Huy
*/
/*
  A. Setting up Camp
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  The organizing committee plans to take the participants of the Olympiad on a hike after the tour. Currently, the number of tents needed to be taken is being calculated. 
  It is known that each tent can accommodate up to 3 people.

  Among the participants, there are a introverts, b extroverts, and c universals:

  - Each introvert wants to live in a tent alone. Thus, a tent with an introvert must contain exactly one person — only the introvert himself.
  - Each extrovert wants to live in a tent with two others. Thus, the tent with an extrovert must contain exactly three people.
  - Each universal is fine with any option (living alone, with one other person, or with two others).
  The organizing committee respects the wishes of each participant very much, so they want to fulfill all of them.

  Tell us the minimum number of tents needed to be taken so that all participants can be accommodated according to their preferences. 
  If it is impossible to accommodate the participants in a way that fulfills all the wishes, output −1.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. This is followed by the descriptions of the test cases.

  Each test case is described by a single line containing three integers a, b, c (0 ≤ a,b,c ≤ 1e9) — the number of introverts, extroverts, and universals, respectively.

  Output
  For each test case, output a single integer — the minimum number of tents, or −1 if it is impossible to accommodate the participants.
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
    int a, b, c;
    cin >> a >> b >> c;
    int d = b % 3;
    if(3 - d <= c && d != 0) {
      cout << a + ((b + c) % 3 != 0 ? (b + c) / 3 + 1 : (b + c) / 3) << endl;
    } else if(d == 0) {
      cout << a + ((b + c) % 3 == 0 ? (b + c) / 3 : (b + c) / 3 + 1) << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}