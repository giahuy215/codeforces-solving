#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, cnt = 0;
  cin >> a >> b;
  while (a <= b)
  {
    cnt++;
    a *= 3;
    b *= 2;
  }
  cout << cnt;

  return 0;
}
