#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s, v;
    cin >> n >> s;
    char a = s[n - 1];
    for(int i = 0; i < n; i++) {
      v += a;
    }
    cout << v << "\n";
  }

  return 0;
}