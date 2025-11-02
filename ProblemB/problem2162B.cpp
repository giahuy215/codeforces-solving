/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 02-11-2025
*/
#include <bits/stdc++.h>
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

    string s;
    cin >> s;

    vector<int> res;

    for(int i = 0; i < n; i++) {
      if(s[i] == '0') {
        res.push_back(i + 1);
      }
    }

    cout << res.size() << endl;

    for(auto x: res) {
      cout << x << " ";
    }
    cout << endl;
  }
  
  return 0;
}