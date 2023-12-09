// https://codeforces.com/problemset/problem/658/A
// A. Bear and Reverse Radewoosh
// time limit per test: 2 seconds
// memory limit per test: 256 megabytes
// input: standard input
// output: standard output
// Limak and Radewoosh are going to compete against each other in the upcoming algorithmic contest. 
// They are equally skilled but they won't solve problems in the same order.

// There will be n problems. The i-th problem has initial score pi and it takes exactly ti minutes to solve it. 
// Problems are sorted by difficulty — it's guaranteed that pi < pi + 1 and ti < ti + 1.

// A constant c is given too, representing the speed of loosing points. 
// Then, submitting the i-th problem at time x (x minutes after the start of the contest) gives max(0,  pi - c·x) points.

// Limak is going to solve problems in order 1, 2, ..., n (sorted increasingly by pi). 
// Radewoosh is going to solve them in order n, n - 1, ..., 1 (sorted decreasingly by pi). 
// Your task is to predict the outcome — print the name of the winner (person who gets more points at the end) or a word "Tie" in case of a tie.

// You may assume that the duration of the competition is greater or equal than the sum of all ti. 
// That means both Limak and Radewoosh will accept all n problems.

// Input
// The first line contains two integers n and c (1 ≤ n ≤ 50, 1 ≤ c ≤ 1000) — the number of problems and the constant representing the speed of loosing points.

// The second line contains n integers p1, p2, ..., pn (1 ≤ pi ≤ 1000, pi < pi + 1) — initial scores.

// The third line contains n integers t1, t2, ..., tn (1 ≤ ti ≤ 1000, ti < ti + 1) where ti denotes the number of minutes one needs to solve the i-th problem.

// Output
// Print "Limak" (without quotes) if Limak will get more points in total. Print "Radewoosh" (without quotes) if Radewoosh will get more points in total. 
// Print "Tie" (without quotes) if Limak and Radewoosh will get the same total number of points.
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, c, sum = 0, point1 = 0, point2 = 0;
  cin >> n >> c;
  int p[n + 1], t[n + 1];
  FOR(i, 1, n + 1) {
    cin >> p[i];
  }
  FOR(i, 1, n + 1) {
    cin >> t[i];
  }
  FOR(i, 1, n + 1) {
    sum += t[i];
    point1 += max(0, p[i] - (c * sum));
  }
  sum = 0;
  ROF(i, 1, n + 1) {
    sum += t[i];
    point2 += max(0, p[i] - (c * sum));
  }

  if(point1 > point2) {
    cout << "Limak";
  } else if(point1 == point2) {
    cout << "Tie";
  } else {
    cout << "Radewoosh";
  }
  return 0;
}