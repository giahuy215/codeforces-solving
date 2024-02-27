/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/255/A
  A. Greg's Workout
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Greg is a beginner bodybuilder. Today the gym coach gave him the training plan. All it had was n integers a1, a2, ..., an. 
  These numbers mean that Greg needs to do exactly n exercises today. Besides, Greg should repeat the i-th in order exercise ai times.

  Greg now only does three types of exercises: "chest" exercises, "biceps" exercises and "back" exercises. 
  Besides, his training is cyclic, that is, the first exercise he does is a "chest" one, the second one is "biceps", the third one is "back", the fourth one is "chest", the fifth one is "biceps", and so on to the n-th exercise.

  Now Greg wonders, which muscle will get the most exercise during his training. We know that the exercise Greg repeats the maximum number of times, trains the corresponding muscle the most. 
  Help Greg, determine which muscle will get the most training.

  Input
  The first line contains integer n (1 ≤ n ≤ 20). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 25) — the number of times Greg repeats the exercises.

  Output
  Print word "chest" (without the quotes), if the chest gets the most exercise, "biceps" (without the quotes), if the biceps gets the most exercise and print "back" (without the quotes) if the back gets the most exercise.

  It is guaranteed that the input is such that the answer to the problem is unambiguous.
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
  int n, x = 0, y = 0, z = 0, cnt = 1;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    if(cnt == 1) {
      x += a[i];
      cnt++;
    } else if(cnt == 2) {
      y += a[i];
      cnt++;
    } else if(cnt == 3) {
      z += a[i];
      cnt = 1;
    }
  }
  int mx = max({x, y, z});
  if(mx == x) cout << "chest";
  else if(mx == y) cout << "biceps";
  else cout << "back";

  return 0;
}