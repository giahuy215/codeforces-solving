/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 02-07-2024
*/
/*
  https://codeforces.com/contest/1989/problem/C
  C. Two Movies
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  A movie company has released 2 movies. These 2 movies were watched by n people. 
  For each person, we know their attitude towards the first movie (liked it, neutral, or disliked it) and towards the second movie.

  If a person is asked to leave a review for the movie, then:

  - if that person liked the movie, they will leave a positive review, and the movie's rating will increase by 1;
  - if that person disliked the movie, they will leave a negative review, and the movie's rating will decrease by 1;
  - otherwise, they will leave a neutral review, and the movie's rating will not change.
  Every person will review exactly one movie — and for every person, you can choose which movie they will review.

  The company's rating is the minimum of the ratings of the two movies. Your task is to calculate the maximum possible rating of the company.

  Input
  The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅10^5).

  The second line contains n integers a1,a2,…,an (−1 ≤ ai ≤ 1), where ai is equal to −1 if the first movie was disliked by the i-th viewer; equal to 1 if the first movie was liked; and 0 if the attitude is neutral.

  The third line contains n integers b1,b2,…,bn (−1 ≤ bi ≤ 1), where bi is equal to −1 if the second movie was disliked by the i-th viewer; equal to 1 if the second movie was liked; and 0 if the attitude is neutral.

  Additional constraint on the input: the sum of n over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, print a single integer — the maximum possible rating of the company, if for each person, choose which movie to leave a review on.
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
  int t;
  cin >> t;
  while(t--) {
    int n, x = 0, y = 0;
    cin >> n;
    int a[n], b[n];
    FOR(i, 0, n) cin >> a[i];
    FOR(i, 0, n) {
      cin >> b[i];
      if(a[i] > b[i]) x += a[i];
      else if(a[i] < b[i]) y += b[i];
    }
    FOR(i, 0, n) {
      if(a[i] == b[i]) {
        if(a[i] == 1) x > y ? y += a[i] : x += a[i];
        else x > y ? x += a[i] : y += a[i];
      }
    }
    
    cout << min(x, y) << "\n";
  }
  
  return 0;
}