/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/169/problem/B
  B. Replacing Digits
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  You are given an integer a that consists of n digits. You are also given a sequence of digits s of length m. 
  The digit in position j (1 ≤ j ≤ m) of sequence s means that you can choose an arbitrary position i (1 ≤ i ≤ n) in a and replace the digit in the chosen position i with sj. 
  Each element in the sequence s can participate in no more than one replacing operation.

  Your task is to perform such sequence of replacements, that the given number a gets maximum value. You are allowed to use not all elements from s.

  Input
  The first line contains positive integer a. Its length n is positive and doesn't exceed 1e5. The second line contains sequence of digits s. 
  Its length m is positive and doesn't exceed 1e5. The digits in the sequence s are written consecutively without any separators.

  The given number a doesn't contain leading zeroes.

  Output
  Print the maximum value that can be obtained from a after a series of replacements. You are allowed to use not all elements from s. The printed number shouldn't contain any leading zeroes.
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
  string a, b;
  cin >> a >> b;
  sort(all(b), greater<char>());
  int j = 0;
  FOR(i, 0, a.size()) {
    if(a[i] < b[j]) {
      a[i] = b[j];
      j++;
    }
    if(j == b.size()) {
      break;
    }
  }
  cout << a << endl;

  return 0;
}