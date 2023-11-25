// https://codeforces.com/problemset/problem/1901/A
// A. Line Trip
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// There is a road, which can be represented as a number line. You are located in the point 0 of the number line,
// and you want to travel from the point 0 to the point x, and back to the point 0.

// You travel by car, which spends 1 liter of gasoline per 1 unit of distance travelled. 
// When you start at the point 0, your car is fully fueled (its gas tank contains the maximum possible amount of fuel).

// There are n gas stations, located in points a1,a2,…,an. When you arrive at a gas station, you fully refuel your car. 
// Note that you can refuel only at gas stations, and there are no gas stations in points 0 and x.

// You have to calculate the minimum possible volume of the gas tank in your car (in liters) 
// that will allow you to travel from the point 0 to the point x and back to the point 0.

// Input
// The first line contains one integer t (1 ≤ t≤ 1000) — the number of test cases.

// Each test case consists of two lines: 
// - the first line contains two integers n and x (1 ≤ n ≤50 ; 2 ≤ x ≤100);
// - the second line contains n integers a1,a2,…,an (0 < a1 < a2 < ⋯ < an < x).

// Output
// For each test case, print one integer — the minimum possible volume of the gas tank in your car 
// that will allow you to travel from the point 0 to the point x and back.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while (t--) {
    int n,x, max = 0;
    cin>>n>>x;
    int a[n+2], b[n+2];
    a[0] = 0;
    a[n+1] = x;
    FOR(i,1,n+1) {
      cin>>a[i];
    }
    FOR(i,1,n+2) {
      if(i == n+1) {
        b[i] = (a[i]-a[i-1])*2;
        if(b[i] > max) {
          max = b[i];
        }
      } else {
        b[i] = a[i]-a[i-1];
        if(b[i] > max) {
          max = b[i];
        }
      }
    }
    cout<<max<<endl;
  }
  
  return 0;
}