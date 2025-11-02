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
    int a[101] = {0};
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a[x]++;
    }

    for(int i = 0; i <= n; i++) {
      if(a[i] == 0) {
        cout << i << endl;
        break;
      }
    }
  }
  
  return 0;
}