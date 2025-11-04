/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 04-11-2025
*/
/*
  https://codeforces.com/problemset/problem/2148/A
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
    int x, n;
    cin >> x >> n;
    if(n % 2 == 0) {
      cout << 0 << endl;
    } else {
      cout << x << endl;
    }
  }
  
  return 0;
}