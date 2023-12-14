#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a[5];
  for(int i = 1; i <= 4; i++) {
    cin >> a[i];
  }
  int sum = 0;
  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '1') {
      sum += a[1];
    }
    if(s[i] == '2') {
      sum += a[2];
    }
    if(s[i] == '3') {
      sum += a[3];
    }
    if(s[i] == '4') {
      sum += a[4];
    }
  }
  cout << sum;

  return 0;
}