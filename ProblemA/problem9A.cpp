#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m, max;
  cin>>n>>m;
  (n > m) ? max = n : max = m;
  switch (max) {
    case 1:
      cout<<"1/1";
      break;
    case 2:
      cout<<"5/6";
      break;
    case 3:
      cout<<"2/3";
      break;
    case 4:
      cout<<"1/2";
      break;
    case 5:
      cout<<"1/3";
      break;
    case 6:
      cout<<"1/6";
      break;

    default:
      break;
  }

  return 0;
}