/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1296/B
  B. Food Buying
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Mishka wants to buy some food in the nearby shop. Initially, he has s burles on his card.

  Mishka can perform the following operation any number of times (possibly, zero): choose some positive integer number 1 ≤ x ≤ s, 
  buy food that costs exactly x burles and obtain ⌊x / 10⌋ burles as a cashback (in other words, Mishka spends x burles and obtains ⌊x / 10⌋ back). The operation ⌊a / b⌋ means a divided by b rounded down.

  It is guaranteed that you can always buy some food that costs x for any possible value of x.

  Your task is to say the maximum number of burles Mishka can spend if he buys food optimally.

  For example, if Mishka has s = 19 burles then the maximum number of burles he can spend is 21. Firstly, he can spend x = 10 burles, obtain 1 burle as a cashback. 
  Now he has s = 10 burles, so can spend x = 10 burles, obtain 1 burle as a cashback and spend it too.

  You have to answer t independent test cases.

  Input
  The first line of the input contains one integer t (1 ≤ t ≤ 1e4) — the number of test cases.

  The next t lines describe test cases. Each test case is given on a separate line and consists of one integer s (1 ≤ s ≤ 1e9) — the number of burles Mishka initially has.

  Output
  For each test case print the answer on it — the maximum number of burles Mishka can spend if he buys food optimally.
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
    int s;
    cin >> s;
    int n = s;
    while (s > 0)
    {
      if(s >= 10) {
        n += s / 10;
        s = s / 10 + s % 10;
      } else {
        cout << n << endl;
        s = 0;
      }
    }
  }

  return 0;
}