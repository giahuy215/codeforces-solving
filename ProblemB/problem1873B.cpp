#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int n, min = 10, count = 0;
    ll ans = 1;
    cin>>n;
    vector<int> a(n);
    FOR(i,0,n) {
      cin>>a[i];
      if(a[i] < min) {
        min = a[i];
        count = 0;
      }
      if(a[i] == min) {
        count++;
      }
    }
    if(min == 0 && count > 1) {
      cout<<0<<endl;
    } else {
      FOR(i,0,n) {
      if(a[i] == 0) a[i] = 1;
        ans *= a[i];
      }
      if(min == 0) {
        cout<<ans<<endl;
      } else {
        cout<<ans/min*(min+1)<<endl;
      }
    }
    
  }
  

  return 0;
}