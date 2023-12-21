// https://codeforces.com/contest/1912/problem/L
// L. LOL Lovers
// time limit per test: 3 seconds
// memory limit per test: 1024 megabytes
// input: standard input
// output: standard output
// There are n food items lying in a row on a long table. 
// Each of these items is either a loaf of bread (denoted as a capital Latin letter 'L' with ASCII code 76) or an onion (denoted as a capital Latin letter 'O' with ASCII code 79). 
// There is at least one loaf of bread and at least one onion on the table.

// You and your friend want to divide the food on the table: you will take a prefix of this row (several leftmost items), 
// and the friend will take the rest. However, there are several restrictions:

// Each person should have at least one item.
// The number of your loaves should differ from the number of your friend's loaves.
// The number of your onions should differ from the number of your friend's onions.
// Find any correct division and print the number of items you take or report that there is no answer.
// Input
// The first line contains one integer n (2 ≤ n ≤ 200) — the number of food items on the table. 
// The second line contains a string of length n consisting of letters 'L' and 'O'. 
// i-th symbol represents the type of the i-th food item on the table: 'L' stands for a loaf of bread, and 'O' stands for an onion.
//  It is guaranteed that this string contains at least one letter 'L' and at least one letter 'O'.

// Output
// Print one integer — a number k such that, if you take k leftmost items and your friend takes the remaining n−k items, 
// each of you and your friend get at least one item, your number of loaves is different from your friend's, 
// and your number of onions is different from your friend's. If there are several possible answers, print any of them. 
// If there are no possible answers, print the number −1.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, l1 = 0, l2 = 0, o1 = 0, o2 = 0;
  string s;
  cin >> n >> s;
  FOR(i, 0, n) {
    if(s[i] == 'L') l2++;
    else o2++;
  }
  FOR(i, 1, n) {
    if(s[i - 1] == 'L') l1++, l2--;
    else o1++, o2--;
    if(l1 != l2 && o1 != o2) {
      cout << i;
      return 0;
    }
  }
  cout << -1;  

  return 0;
}