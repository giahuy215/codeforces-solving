/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 05-11-2025
*/
/*
  https://codeforces.com/problemset/problem/2149/A
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
    int n, res = 0, countMinus = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] == 0) {
        res++;
      } else if(a[i] < 0) {
        countMinus++;
      } else {
        continue;
      }
    }
    if(countMinus % 2 == 0) {
      cout << res << endl;
    } else {
      cout << res + 2 << endl;
    }
    
  }
  
  return 0;
}