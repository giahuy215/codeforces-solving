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
  int n, t;
  cin >> n >> t;
  if(n < 2 && t == 10) {
    cout << -1;
  } else {
    if(t == 10) n -= 2;
    else n -= 1;
    cout << t;
    while(n--) cout << 0;
  }

  return 0;
}