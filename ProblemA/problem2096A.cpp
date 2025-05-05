/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 05-05-2025
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
    int small = 1, large = n;
    string s;
    cin >> s;
    int b[n - 1];
    int j = 0;
    for(int i = n - 2; i >= 0; i--) {
      if(s[i] == '<') {
        b[j] = small;
        small++;
        j++;
      } else {
        b[j] = large;
        large--;
        j++;
      }
    }

    cout << small << " ";

    for(int i = n - 2; i >= 0; i--) {
      cout << b[i] << " ";
    }
    
    cout << endl;
  }
  
  return 0;
}
