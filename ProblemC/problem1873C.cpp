// https://codeforces.com/contest/1873/problem/C
// C. Target Practice
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output

// A 10×10 target is made out of five "rings" as shown. Each ring has a different point value: the outermost ring — 1 point, 
// the next ring — 2 points, ..., the center ring — 5 points.
// https://espresso.codeforces.com/5c51151adbfdd4a0384d7616d0dc23fe1a212550.png (image)

// Vlad fired several arrows at the target. Help him determine how many points he got.

// Input
// The input consists of multiple test cases. The first line of the input contains a single integer t (1≤t≤1000) — the number of test cases.

// Each test case consists of 10 lines, each containing 10 characters. 
// Each character in the grid is either X (representing an arrow) or . (representing no arrow).

// Output
// For each test case, output a single integer — the total number of points of the arrows.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int point(int a, int b) {
  if(a == 0 || b == 0 || a == 9 || b == 9) {
    return 1;
  }
  if(a == 1 || b == 1 || a == 8 || b == 8) {
    return 2;
  }
  if(a == 2 || b == 2 || a == 7 || b == 7) {
    return 3;
  }
  if(a == 3 || b == 3 || a == 6 || b == 6) {
    return 4;
  }
  return 5;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while (t--) {
    char a[10][10];
    int sum = 0;
    FOR(i,0,10){
      FOR(j,0,10) {
        cin>>a[i][j];
        if(a[i][j] == 'X') {
          sum += point(i,j);
        }
      }
    }
    cout<<sum<<endl;
  }

  return 0;
}