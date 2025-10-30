/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 30-10-2025
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int prime[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    ll n, smallest = 10001;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) {
      cin >> a[i];
      for(ll j = 0; j < 17; j++) {
        if(gcd(a[i], prime[j]) == 1) {
          if(prime[j] < smallest) {
            smallest = prime[j];
          }
          break;
        }
      }
    }
    if(smallest == 10001) {
      cout << -1 << endl;
    } else {
      cout << smallest << endl;
    }
  }
  
  return 0;
}