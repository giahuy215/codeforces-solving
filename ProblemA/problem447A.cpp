/*
  Author : Nguyen Duc Gia Huy
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
  int p, n;
  cin >> p >> n;
  set<int> s;
  FOR(i, 0, n) {
    int x;
    cin >> x;
    s.insert(x % p);
    if(s.size() != i + 1) {
      cout << i + 1;
      return 0;
    }
  }
  cout << -1;

  return 0;
}