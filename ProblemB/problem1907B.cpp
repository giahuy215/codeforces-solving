#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int t;
  cin >> t;
  while (t--)
  {
    string s, v;
    int cntl = 0, cntu = 0;
    cin >> s;
    reverse(s.begin(), s.end());
    FOR(i, 0, s.size()) {
      int n = s[i];
      if(s[i] != 'B' && s[i] != 'b') {
        if(cntl != 0 && s[i] >= 97 && s[i] <= 122) {
          cntl--;
        } else if(cntu != 0 && s[i] >= 65 && s[i] <= 90){
          cntu--;
        } else {
          v += s[i];
        }
      } else if(s[i] == 'B') {
        cntu++;
      } else {
        cntl++;
      }
    }
    reverse(v.begin(), v.end());
    cout << v << "\n";
  }
  
  return 0;
}