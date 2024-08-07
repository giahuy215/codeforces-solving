/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 07-08-2024
*/
/*
  https://codeforces.com/contest/1993/problem/A
  A. Question Marks
  time limit per test: 1 second
  memory limit per test: 256 megabytes

  Tim is doing a test consisting of 4n questions; each question has 4 options: 'A', 'B', 'C', and 'D'. 
  For each option, there are exactly n correct answers corresponding to that option — meaning there are n questions with the answer 'A', 
  n questions with the answer 'B', n questions with the answer 'C', and n questions with the answer 'D'.

  For each question, Tim wrote his answer on the answer sheet. If he could not figure out the answer, he would leave a question mark '?' for that question.

  You are given his answer sheet of 4n characters. What is the maximum number of correct answers Tim can get?

  Input
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

  The first line of each test case contains an integer n (1 ≤ n ≤ 100).

  The second line of each test case contains a string s of 4n characters (si ∈ {A,B,C,D,?}) — Tim's answers for the questions.

  Output
  For each test case, print a single integer — the maximum score that Tim can achieve.
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
    int n, sum = 0;
    string s;
    cin >> n >> s;
    int a[4] {0};
    for(int i = 0; i < s.size(); i++) {
      if(s[i] != '?') {
        a[s[i] - 'A']++;
      } else continue;
    }
    for(auto x: a) {
      if(x > n) sum += n;
      else sum += x;
    }
    cout << sum << "\n";
  }
  
  return 0;
}