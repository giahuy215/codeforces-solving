#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b[101];
  cin>>n;
  for(int i = 1; i <= n; i++) {
    cin>>a;
    b[a] = i;
  }
  for(int i = 1; i <= n; i++) {
    cout<<b[i]<<" ";
  }
  return 0;
}