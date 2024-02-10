/*
  Author : Nguyen Duc Gia Huy
*/
/*
  A. Cookies
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Olga came to visit the twins Anna and Maria and saw that they have many cookies. The cookies are distributed into bags. 
  As there are many cookies, Olga decided that it's no big deal if she steals a bag. 
  However, she doesn't want the sisters to quarrel because of nothing when they divide the cookies. 
  That's why Olga wants to steal a bag with cookies so that the number of cookies in the remaining bags was even, that is, 
  so that Anna and Maria could evenly divide it into two (even 0 remaining cookies will do, just as any other even number). 
  How many ways there are to steal exactly one cookie bag so that the total number of cookies in the remaining bags was even?

  Input
  The first line contains the only integer n (1 ≤ n ≤ 100) — the number of cookie bags Anna and Maria have. 
  The second line contains n integers ai (1 ≤ ai ≤ 100) — the number of cookies in the i-th bag.

  Output
  Print in the only line the only number — the sought number of ways. If there are no such ways print 0.
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
  int n, odd = 0, even = 0;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    if(a[i] % 2 == 0) even++;
    else odd++;
  }
  if(odd % 2 == 0) cout << even;
  else cout << odd;

  return 0;
}