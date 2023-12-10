// https://codeforces.com/problemset/problem/1/B
// B. Spreadsheets
// time limit per test: 10 seconds
// memory limit per test: 64 megabytes
// input: standard input
// output: standard output

// In the popular spreadsheets systems (for example, in Excel) the following numeration of columns is used. 
// The first column has number A, the second — number B, etc. till column 26 that is marked by Z. 
// Then there are two-letter numbers: column 27 has number AA, 28 — AB, column 52 is marked by AZ. 
// After ZZ there follow three-letter numbers, etc.

// The rows are marked by integer numbers starting with 1. The cell name is the concatenation of the column and the row numbers. 
// For example, BC23 is the name for the cell that is in column 55, row 23.

// Sometimes another numeration system is used: RXCY, where X and Y are integer numbers, showing the column and the row numbers respectfully. 
// For instance, R23C55 is the cell from the previous example.

// Your task is to write a program that reads the given sequence of cell coordinates and produce each item written according to 
// the rules of another numeration system.

// Input
// The first line of the input contains integer number n (1 ≤ n ≤ 10^5), the number of coordinates in the test. Then there follow n lines, 
// each of them contains coordinates. All the coordinates are correct, there are no cells with the column and/or the row numbers larger than 10^6 .

// Output
// Write n lines, each line should contain a cell coordinates in the other numeration system.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  while (n--) {
    string s;
    int a = 0, b = 0, p;
    cin >> s;
    ROF(i,0,s.size()) {
      int sub = s[i - 1];
      if(s[i] == 'C' && sub >= 48 && sub <= 57) {
        b++;
        p = i;
      } else {
        a++;
      }
    }
    if (b == 1) {
      string v;
      int c = stoi(s.substr(p + 1, s.length()));
      while (c > 0)
      {
        int d = c % 26;
        if (d == 0) {
          d = 26;
          c = c - 26;
        }
        v += char(d + 64);
        c = c / 26;
      }
      reverse(v.begin(), v.end());

      FOR(i, 1 , p){
        v += s[i];
      }
      cout << v << "\n";
    }

    if (a != 0 && b != 1) {
      string v;
      int sum = 0, q;
      FOR(i, 0, s.size()) {
        if(s[i] >= 65 && s[i] <= 90) {
          int c = s[i] - 64;
          if(i == 0) {
            sum += c;
          } 
          if(i == 1) {
            int d = s[i - 1] - 64;
            sum = sum - d + (d * 26) + c; 
          }
          if(i > 1) {
            int d = s[i - 1] - 64;
            sum = (sum - d) * 26 + 26 * d + c; 
          }
        } else {
          q = i;
          break;
        }
      }
      cout << "R" << s.substr(q, s.size()) << "C" << sum << "\n";
    }
  }

  return 0;
}