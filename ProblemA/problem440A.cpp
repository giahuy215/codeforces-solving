/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/440/problem/A
  A. Forgotten Episode
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Polycarpus adores TV series. Right now he is ready to finish watching a season of a popular sitcom "Graph Theory". 
  In total, the season has n episodes, numbered with integers from 1 to n.

  Polycarpus watches episodes not one by one but in a random order. He has already watched all the episodes except for one. 
  Which episode has Polycaprus forgotten to watch?

  Input
  The first line of the input contains integer n (2 ≤ n ≤ 100000) — the number of episodes in a season. 
  Assume that the episodes are numbered by integers from 1 to n.

  The second line contains n - 1 integer a1, a2, ..., an (1 ≤ ai ≤ n) — the numbers of episodes that Polycarpus has watched. 
  All values of ai are distinct.

  Output
  Print the number of the episode that Polycarpus hasn't watched.
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
  int a[n - 1];
  for(int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }

  sort(a, a + (n - 1));

  for(int i = 0; i < n; i++) {
    if(a[i] != (i + 1) || i == n - 1) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}