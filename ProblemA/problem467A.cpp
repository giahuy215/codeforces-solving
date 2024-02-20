/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/467/A
  A. George and Accommodation
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. 
  Now they are moving into a dormitory.

  George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). 
  Your task is to count how many rooms has free place for both George and Alex.

  Input
  The first line contains a single integer n (1 ≤ n ≤ 100) — the number of rooms.

  The i-th of the next n lines contains two integers pi and qi (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in the i-th room and the room's capacity.

  Output
  Print a single integer — the number of rooms where George and Alex can move in.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, sum = 0;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    if(b - a >= 2) sum++;
  }
  cout << sum;

  return 0;
}