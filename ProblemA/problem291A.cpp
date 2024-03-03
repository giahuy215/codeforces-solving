/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/291/A
  A. Spyke Talks
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Polycarpus is the director of a large corporation. There are n secretaries working for the corporation, each of them corresponds via the famous Spyke VoIP system during the day. 
  We know that when two people call each other via Spyke, the Spyke network assigns a unique ID to this call, a positive integer session number.

  One day Polycarpus wondered which secretaries are talking via the Spyke and which are not. 
  For each secretary, he wrote out either the session number of his call or a 0 if this secretary wasn't talking via Spyke at that moment.

  Help Polycarpus analyze these data and find out the number of pairs of secretaries that are talking. 
  If Polycarpus has made a mistake in the data and the described situation could not have taken place, say so.

  Note that the secretaries can correspond via Spyke not only with each other, but also with the people from other places. 
  Also, Spyke conferences aren't permitted — that is, one call connects exactly two people.

  Input
  The first line contains integer n (1 ≤ n ≤ 1e3) — the number of secretaries in Polycarpus's corporation. 
  The next line contains n space-separated integers: id1, id2, ..., idn (0 ≤ idi ≤ 1e9). 
  Number idi equals the number of the call session of the i-th secretary, if the secretary is talking via Spyke, or zero otherwise.

  Consider the secretaries indexed from 1 to n in some way.

  Output
  Print a single integer — the number of pairs of chatting secretaries, or -1 if Polycarpus's got a mistake in his records and the described situation could not have taken place.
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
  int n, cnt = 0;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }

  sort(a, a + n);

  FOR(i, 1, n) {
    if(a[i] == a[i-1] && a[i] == a[i + 1] && a[i] != 0) {
      cout << -1;
      return 0;
    } else if(a[i] == a[i-1] && a[i] != 0) {
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}