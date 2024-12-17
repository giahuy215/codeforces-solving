/*
  Author : Nguyen Duc Gia Huy
  Date(DD-MM-YYYY): 17-12-2024
*/
/*
  A. Alyona and a Square Jigsaw Puzzle
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  
  Alyona assembles an unusual square Jigsaw Puzzle. She does so in n days in the following manner:

  - On the first day, she starts by placing the central piece in the center of the table.
  - On each day after the first one, she places a certain number of pieces around the central piece in clockwise order, always finishing each square layer completely before starting a new one.
  For example, she places the first 14 pieces in the following order:

  Alyona is happy if at the end of the day the assembled part of the puzzle does not have any started but unfinished layers. 
  Given the number of pieces she assembles on each day, find the number of days Alyona is happy on.

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 500). 
  The description of the test cases follows.

  The first line contains a single integer n (1 ≤ n ≤ 100), the number of days.

  The second line contains n integers a1,a2,…,an (1 ≤ ai ≤ 100, a1=1), where ai is the number of pieces Alyona assembles on the i-th day.

  It is guaranteed in each test case that at the end of the n days, there are no unfinished layers.

  Output
  For each test case, print a single integer: the number of days when Alyona is happy.
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
    int n, sum = 0;
    cin >> n;
    int a[n];
    int x = 1, cnt = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
      if(sum == x * x) {
        cnt++;
        x += 2;
      } else if(sum > x * x) {
        while (sum >= x * x)
        {
          if(sum == x * x) {
            cnt++;
          }
          x += 2;
        }
      }
    }
    
    cout << cnt << endl;
  }
  
  return 0;
}
