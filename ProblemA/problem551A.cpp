/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/551/A
  A. GukiZ and Contest
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Professor GukiZ likes programming contests. He especially likes to rate his students on the contests he prepares. Now, he has decided to prepare a new contest.

  In total, n students will attend, and before the start, every one of them has some positive integer rating. Students are indexed from 1 to n. Let's denote the rating of i-th student as ai. 
  After the contest ends, every student will end up with some positive integer position. GukiZ expects that his students will take places according to their ratings.

  He thinks that each student will take place equal to 1 + (number of students with strictly higher rating than his or her). 
  In particular, if student A has rating strictly lower then student B, A will get the strictly better position than B, and if two students have equal ratings, they will share the same position.

  GukiZ would like you to reconstruct the results by following his expectations. Help him and determine the position after the end of the contest for each of his students if everything goes as expected.

  Input
  The first line contains integer n (1 ≤ n ≤ 2000), number of GukiZ's students.

  The second line contains n numbers a1, a2, ... an (1 ≤ ai ≤ 2000) where ai is the rating of i-th student (1 ≤ i ≤ n).

  Output
  In a single line, print the position after the end of the contest for each of n students in the same order as they appear in the input.
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
  int n, cnt = 1;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
  }
  FOR(i, 0, n) {
    FOR(j, 0, n) {
      if(a[j] > a[i]) cnt++;
    }
    cout << cnt << " ";
    cnt = 1;
  }
  

  return 0;
}