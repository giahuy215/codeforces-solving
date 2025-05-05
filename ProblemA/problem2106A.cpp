/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 05-05-2025
*/
/*
  https://codeforces.com/problemset/problem/2106/A
*/
#include <bits/stdc++.h>

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
    int n, sum = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
      if(s[i] == '0') {
        sum += 1;
      } else {
        sum += n - 1;
      }
    }
    cout << sum << endl;
  }
  
  return 0;
}
