/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1978/A
  A. Alice and Books
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  Alice has n books. The 1-st book contains a1 pages, the 2-nd book contains a2 pages, …, the n-th book contains an pages. 
  Alice does the following:

  - She divides all the books into two non-empty piles. Thus, each book ends up in exactly one of the two piles.
  - Alice reads one book with the highest number in each pile.
  Alice loves reading very much. Help her find the maximum total number of pages she can read by dividing the books into two piles.

  Input
  Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. The description of the test cases follows.

  The first line of each test case contains a single integer n (2 ≤ n ≤ 100) — the number of books Alice has.

  The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10^9) — the number of pages in each book.

  Output
  For each test case, output a single integer — the maximum number of pages Alice can read.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n, mx = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(i != n - 1) mx = max(mx, a[i]);
    }
    cout << a[n - 1] + mx << "\n";
  }
  
  return 0;
}
