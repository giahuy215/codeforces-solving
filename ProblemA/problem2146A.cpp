/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 10-11-2025

  Link problem: https://codeforces.com/problemset/problem/2146/A
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
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(a.size() > 0 && a[a.size() - 1].first == x) {
        a[a.size() - 1].second++;
      } else {
        a.push_back({x, 1});
      }
    }

    sort(a.begin(), a.end(), [](pair<int, int> &c, pair<int, int> &d) {
      return c.second < d.second;
    });

    
    int temp, ans = 0;
    for(int i = 0; i < a.size(); i++) {
      temp = a.at(i).second * (a.size() - i);
      if(temp > ans) {
        ans = temp;
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}