#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  float sum = 0;
  cin >> n;
  FOR(i, 0, n) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << setprecision(5) << fixed << sum / n;

  return 0;
}