// https://codeforces.com/problemset/problem/1883/A
// A. Morning
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// You are given a four-digit pin code consisting of digits 0 to 9 that needs to be entered. Initially, the cursor points to the digit 1.
// In one second, you can perform exactly one of the following two actions:

// - Press the cursor to display the current digit,
// - Move the cursor to any adjacent digit.

// 1 2 3 4 5 6 7 8 9 0 (image)
// The image above shows the device you are using to enter the pin code. For example, for the digit 5, the adjacent digits are 4 and 6,
// and for the digit 0, there is only one adjacent digit, 9. Determine the minimum number of seconds required to enter the given four-digit pin code.

// Input
// Each test consists of multiple test cases. The first line contains a single integer t(1 <= t <= 10^4) - the number of the test cases. 
// This is followed by their description.
// The single line of each test case describes the pin code as a string of length 4, consisting of digits from 0 to 9.

// Output
// For each test case, output the minimum number of seconds required to enter the given pin code.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while (t-- > 0){
    string s;
    cin>>s;
    int temp = 1, sum = 0;
    FOR(i,0,4){
      int a = s[i] - '0';
      if(a == 0) {
        a = 10;
      }
      sum = sum + abs(temp - a) + 1;
      temp = a;
    }
    cout<<sum<<endl;
  }
  
  return 0;
}