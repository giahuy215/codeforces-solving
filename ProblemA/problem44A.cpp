/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/44/A
  A. Indian Summer
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest and picking a bouquet from fallen leaves. 
  Alyona is very choosy — she doesn't take a leaf if it matches the color and the species of the tree of one of the leaves she already has. 
  Find out how many leaves Alyona has picked.

  Input
  The first line contains an integer n (1 ≤ n ≤ 100) — the number of leaves Alyona has found. The next n lines contain the leaves' descriptions. 
  Each leaf is characterized by the species of the tree it has fallen from and by the color. The species of the trees and colors are given in names, 
  consisting of no more than 10 lowercase Latin letters. A name can not be an empty string. The species of a tree and the color are given in each line separated by a space.

  Output
  Output the single number — the number of Alyona's leaves.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  set<pair<string, string>> a;
  FOR(i, 0, n) {
    string s, v;
    cin >> s >> v;
    a.insert({s, v});
  }
  cout << a.size() << endl;

  return 0;
}