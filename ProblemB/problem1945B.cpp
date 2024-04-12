/*
  Author : Nguyen Duc Gia Huy
*/
/*
  B. Fireworks
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  One of the days of the hike coincided with a holiday, so in the evening at the camp, it was decided to arrange a festive fireworks display. 
  For this purpose, the organizers of the hike bought two installations for launching fireworks and a huge number of shells for launching.

  Both installations are turned on simultaneously. The first installation launches fireworks every a minutes (i.e., after a,2⋅a,3⋅a,… minutes after launch). 
  The second installation launches fireworks every b minutes (i.e., after b,2⋅b,3⋅b,… minutes after launch).

  Each firework is visible in the sky for m+1 minutes after launch, i.e., if a firework was launched after x minutes after the installations were turned on, it will be visible every minute from x to x+m, inclusive. 
  If one firework was launched m minutes after another, both fireworks will be visible for one minute.

  What is the maximum number of fireworks that could be seen in the sky at the same time?

  Input
  Each test consists of several test cases. The first line contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. Then follow the descriptions of the test cases.

  The first and only line of each test case contains integers a, b, m (1 ≤ a,b,m ≤ 1e18) — the frequency of launching for the first installation, 
  the second installation, and the time the firework is visible in the sky.

  Output
  For each set of input data, output a single number — the maximum number of fireworks that can be seen simultaneously.
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
  while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << c / a + c / b + 2 << endl; 
  }

  return 0;
}