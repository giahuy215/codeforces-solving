/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 09-11-2025

  Link problem: https://codeforces.com/problemset/problem/2156/B
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
  while(t--) {
    int n, q;
    string s;
    cin >> n >> q >> s;
    int a[q], numofb = 0;
    for(int i = 0; i < q; i++) {
      cin >> a[i];
    }

    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'B') {
        numofb++;
      }
    }

    for(int i = 0; i < q; i++) {
      int ans = 0;
      int cal = a[i];
      for(int j = 0; j < s.size(); j++) {
        if(numofb == 0) {
          ans = cal;
          cal = 0;
        } else {
          if(s[j] == 'A') {
            cal--;
            ans++;
          } else {
            cal /= 2;
            ans++;
          }
        }

        if(cal == 0) {
          break;
        }

        if(j == s.size() - 1) {
          j = -1;
        }
      }
      cout << ans << endl;
    }
  }
  
  return 0;
}