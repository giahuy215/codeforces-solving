/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/648/B
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
  int a[2 * n];
  FOR(i, 0, 2 * n) {
    cin >> a[i];
  }
  sort(a, a + 2 * n);
  FOR(i, 0, n) {
    cout << a[i] << " " << a[2 * n - 1 - i] << endl;
  }
  
  return 0;
}