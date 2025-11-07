/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 07-11-2025
*/
/*
  https://codeforces.com/problemset/problem/2153/A
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
    int n;
    cin >> n;
    set<int> b;
    for(int i = 0; i < n; i++) {
      int a;
      cin >> a;
      b.insert(a);
    }
    cout << b.size() << endl;
  }
  
  return 0;
}