/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1916/A
  A. 2023
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  In a sequence a, whose product was equal to 2023, k numbers were removed, leaving a sequence b of length n. 
  Given the resulting sequence b, find any suitable sequence a and output which k elements were removed from it, or state that such a sequence could not have existed.

  Notice that you are not guaranteed that such array exists.

  Input
  Each test consists of several test cases. The first line contains a single integer t (1 ≤ t ≤ 100) — the number of test cases. 
  This is followed by a description of the test cases.

  The first line of each test case contains two integers n (1 ≤ n,k ≤ 5) — the size of sequence b and the number of numbers removed from sequence a.

  The second line contains n integers b1,b2,…,bn (1 ≤ bi ≤ 2023) — the remaining sequence. The values of bi might not be divisors of 2023.

  Output
  For each test case, output "YES" if the sequence a exists, and in the following line output k non-negative integers that were removed from the sequence a. 
  If the sequence a does not exist, output "NO" in a single line.

  You can output the answer in any case (uppercase or lowercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive answers.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, m = 2023;
    cin >> n >> k;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    FOR(i, 0, n) {
      if(m % a[i] == 0) {
        m = m / a[i];
      } else {
        cout << "NO" << endl;
        m = 2024;
        break;
      }
    }
    if(m <= 2023) {
      cout << "YES" << endl;
      cout << m << " ";
      if(k > 1) {
        FOR(i, 1, k) {
          cout << 1 << " ";
        }
      }
      cout << endl;
    }
  }

  return 0;
}