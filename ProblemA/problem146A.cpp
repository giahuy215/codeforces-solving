#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int n,m;
string s;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>s;

  FOR(i,0,n) {
    if(s[i] != '4' && s[i] != '7') {
      cout<<"NO";
      return 0;
    } else if(i < n/2){
      m+= s[i];
    } else {
      m-= s[i];
    }
  }

  if(m == 0) {
    cout<<"YES";
  } else {
    cout<<"NO";
  }

  return 0;
}