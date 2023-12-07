#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, t, cnt = 1, mx = 1;
  cin >> n >> t;
  n--;
  while (n--) {
    int x;
    cin >> x;
    if(x > t) {
      cnt++;
    } else {
      cnt = 1;
    }
    t = x;
    mx = max(cnt,mx);
  }
  cout << mx;

  return 0;
}