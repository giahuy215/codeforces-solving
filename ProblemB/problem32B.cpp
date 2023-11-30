#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin>>s;
  int a = 0;
  FOR(i,0,s.size()){
    if(s.at(i) == '.') {
      if(i == 0) {
        cout<<0;
        a = 0;
      } else if(s.at(i - 1) == '-' && a != 2) {
        cout<<1;
      } else {
        cout<<0;
      }
    } else {
      if(i == 0) {
        continue;
      } else if (s.at(i - 1) == '-' && a != 2){
        cout<<2;
        a = 2;
      } else {
        a = 0;
        continue;
      }
    }
  }

  return 0;
}