/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 21-06-2025

  link: https://codeforces.com/problemset/problem/2118/A
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
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
      cout << "1";
    }
    for(int i = 0; i < n - k; i++) {
      cout << "0";
    }
    cout << endl;
  }
  
  return 0;
}