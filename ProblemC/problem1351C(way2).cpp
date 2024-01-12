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

struct path {
  int a, b, c, d;

  bool operator<(const path& rhs) const {
    if(a == rhs.a) {
      if(b == rhs.b) {
        if(c == rhs.c) {
          return d < rhs.d;
        }
        return c < rhs.c;
      }
      return b < rhs.b;
    }
    return a < rhs.a;
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  
  while (t--)
  {
    string s;
    cin >> s;
    set<path> mp;
    int a = 0, b = 0;
    FOR(i, 0, s.size()) {
      if(s[i] == 'N') {
        mp.insert({a, b, a, b + 1});
        mp.insert({a, b + 1,a, b});
        b++;
      } else if(s[i] == 'S') {
        mp.insert({a, b - 1, a, b});
        mp.insert({a, b, a, b - 1});
        b--;
      } else if(s[i] == 'E') {
        mp.insert({a, b, a + 1, b});
        mp.insert({a + 1, b, a, b});
        a++;
      } else {
        mp.insert({a - 1, b, a, b});
        mp.insert({a, b, a - 1, b});
        a--;
      }
    }
    cout << (mp.size() / 2) * 5 + (s.size() - (mp.size() / 2)) << endl;
  }

  return 0;
}