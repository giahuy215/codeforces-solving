/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 30-10-2025
*/
/*
  https://codeforces.com/problemset/problem/2167/C
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int isEven(int n) {
  return n % 2 == 0;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n], even = 0, odd = 0;
    FOR(i, 0, n) {
      cin >> a[i];
      if(isEven(a[i])) {
        even++;
      } else odd++;
    }

    if(even > 0 && odd > 0) {
      sort(a, a + n);
      for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
    } else {
      for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
    }
    cout << endl;
  }
  
  return 0;
}