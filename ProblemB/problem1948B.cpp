/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 30-10-2025
*/
/*
  https://codeforces.com/contest/1948/problem/B
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

void splitTwoDigitNumber(int num, int &first, int &second) {
    if (num < 10 || num > 99) {
        return;
    }

    first = num / 10;   // Tens digit
    second = num % 10;  // Ones digit
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n, end;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    bool res = false;
    for(int i = 0; i < n; i++) {
      if(i == 0) {
        if(a[i] > 9) {
          int x, y;
          splitTwoDigitNumber(a[i], x, y);
          if(x > y) {
            end = a[i];
            res = true;
          } else {
            end = y;
            res = true;
          }
        } else {
          end = a[i];
          res = true;
        }
      } else {
        if(a[i] < end) {
          res = false;
          break;
        } else if(a[i] == end) {
          res = true;
          end = a[i];
        } else {
          if(a[i] > 9) {
            int x, y;
            splitTwoDigitNumber(a[i], x, y);
            if(x < end) {
              end = a[i];
              res = true;
            } else if(x >= end && x <= y){
              end = y;
              res = true;
            } else {
              end = a[i];
              res = true;
            }
          } else {
            if(a[i] > end) {
              end = a[i];
              res = true;
            } else {
              res = false;
              break;
            }
          }
        }
      }
    }

    if(res) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  
  return 0;
}