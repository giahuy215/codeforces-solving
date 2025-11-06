/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 06-11-2025
*/
/*
  https://codeforces.com/contest/2149/problem/D
*/
#include <bits/stdc++.h>

#define endl "\n"

typedef long long ll;
using namespace std;

ll move(vector<ll> a) {
  if(a.empty()) return 0;
  ll pos = ll(a.size() / 2), temp = 0;
  for(ll i = 0; i < a.size(); i++) {
    temp += abs(a[pos] - a[i]) - abs(pos - i);
  }
  return temp;
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
    vector<ll> a,b;
    for(ll i = 1; i <= n; i++) {
      char x;
      cin >> x;
      if(x == 'a') a.push_back(i);
      else b.push_back(i);
    }

    cout << min(move(a), move(b)) << endl;
  }
  
  return 0;
}