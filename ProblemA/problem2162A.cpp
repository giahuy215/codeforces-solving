/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 31-10-2025
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
    int n, max = 0; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] > max) {
        max = a[i];
      }
    }
    cout << max << endl;
  }
  
  return 0;
}