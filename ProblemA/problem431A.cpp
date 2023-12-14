// https://codeforces.com/problemset/problem/431/A
// A. Black Square
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "Black Square" on 
// his super cool touchscreen phone.

// In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. 
// According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. 
// As Jury is both smart and lazy, he counted that he wastes exactly ai calories on touching the i-th strip.

// You've got a string s, describing the process of the game and numbers a1, a2, a3, a4. Calculate how many calories Jury needs to destroy all the squares?

// Input
// The first line contains four space-separated integers a1, a2, a3, a4 (0 ≤ a1, a2, a3, a4 ≤ 1e4).

// The second line contains string s (1 ≤ |s| ≤ 1e5), where the і-th character of the string equals "1", 
// if on the i-th second of the game the square appears on the first strip, "2", if it appears on the second strip, 
// "3", if it appears on the third strip, "4", if it appears on the fourth strip.

// Output
// Print a single integer — the total number of calories that Jury wastes.
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