/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 15-05-2025
*/
/*
  https://codeforces.com/problemset/problem/2104/B
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
    int n, max = 0; 
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] > max) {
        max = a[i];
      }
      b[i] = max;
    }

    ll sum = 0, temp = 0;

    for(int i = n - 1; i >= 0; i--) {
      sum += a[i];
      temp = sum;
      if(a[i] < b[i]) {
        temp -= a[i];
        cout << temp + b[i] << " ";
      } else {
        cout << temp << " ";
      }
    }

    cout << endl;
  }
  
  return 0;
}