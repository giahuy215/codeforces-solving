/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/294/A
  A. Shaass and Oskols
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Shaass has decided to hunt some birds. There are n horizontal electricity wires aligned parallel to each other.
  Wires are numbered 1 to n from top to bottom. On each wire there are some oskols sitting next to each other.
  Oskol is the name of a delicious kind of birds in Shaass's territory. Supposed there are ai oskols sitting on the i-th wire.

  Sometimes Shaass shots one of the birds and the bird dies (suppose that this bird sat at the i-th wire). 
  Consequently all the birds on the i-th wire to the left of the dead bird get scared and jump up on the wire number i - 1, if there exists no upper wire they fly away. 
  Also all the birds to the right of the dead bird jump down on wire number i + 1, if there exists no such wire they fly away.

  Shaass has shot m birds. You're given the initial number of birds on each wire, tell him how many birds are sitting on each wire after the shots.

  Input
  The first line of the input contains an integer n, (1 ≤ n ≤ 100). The next line contains a list of space-separated integers a1, a2, ..., an, (0 ≤ ai ≤ 100).

  The third line contains an integer m, (0 ≤ m ≤ 100). Each of the next m lines contains two integers xi and yi. 
  The integers mean that for the i-th time Shaass shoot the yi-th (from left) bird on the xi-th wire, (1 ≤ xi ≤ n, 1 ≤ yi). 
  It's guaranteed there will be at least yi birds on the xi-th wire at that moment.

  Output
  On the i-th line of the output print the number of birds on the i-th wire.
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
  int n, m;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }
  cin >> m;
  int b[n + 2];
  FOR(i, 0, n + 2) {
    if(i == 0 || i == n + 1) {
      b[i] = 0;
    } else {
      b[i] = a[i - 1]; 
    }
  }
  FOR(i, 0, m) {
    int x, y;
    cin >> x >> y;
    b[x - 1] += y - 1;
    b[x + 1] += b[x] - y;
    b[x] = 0;
  }

  FOR(i, 1, n + 1) {
    cout << b[i] << endl;
  }

  return 0;
}