#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  FOR(i,1,n+1) {
    if(i*(i+1)/2 == n) {
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";
  return 0;
}