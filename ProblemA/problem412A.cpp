/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/421/A
  A. Pasha and Hamsters
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Pasha has two hamsters: Arthur and Alexander. Pasha put n apples in front of them. Pasha knows which apples Arthur likes. 
  Similarly, Pasha knows which apples Alexander likes. Pasha doesn't want any conflict between the hamsters (as they may like the same apple), so he decided to distribute the apples between the hamsters on his own. 
  He is going to give some apples to Arthur and some apples to Alexander. It doesn't matter how many apples each hamster gets but it is important that each hamster gets only the apples he likes. 
  It is possible that somebody doesn't get any apples.

  Help Pasha distribute all the apples between the hamsters. Note that Pasha wants to distribute all the apples, not just some of them.

  Input
  The first line contains integers n, a, b (1 ≤ n ≤ 100; 1 ≤ a, b ≤ n) — the number of apples Pasha has, the number of apples Arthur likes and the number of apples Alexander likes, correspondingly.

  The next line contains a distinct integers — the numbers of the apples Arthur likes. The next line contains b distinct integers — the numbers of the apples Alexander likes.

  Assume that the apples are numbered from 1 to n. The input is such that the answer exists.

  Output
  Print n characters, each of them equals either 1 or 2. If the i-h character equals 1, then the i-th apple should be given to Arthur, otherwise it should be given to Alexander. 
  If there are multiple correct answers, you are allowed to print any of them.
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
  int n, a, b;
  cin >> n >> a >> b;
  map<int, int> mp;
  FOR(i, 0, a) {
    int x; cin >> x;
    mp[x] = 1;
  }
  FOR(i, 0, b) {
    int x; cin >> x;
    mp[x] = 2;
  }
  for(auto x: mp) {
    cout << x.second << " ";
  }

  return 0;
}
