/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1974/problem/E
  E. Money Buys Happiness
  time limit per test: 3 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Being a physicist, Charlie likes to plan his life in simple and precise terms.

  For the next m months, starting with no money, Charlie will work hard and earn x pounds per month. 
  For the i-th month (1 ≤ i ≤ m), there'll be a single opportunity of paying cost ci pounds to obtain happiness hi.

  Borrowing is not allowed. Money earned in the i-th month can only be spent in a later j-th month (j>i).

  Since physicists don't code, help Charlie find the maximum obtainable sum of happiness.

  Input
  The first line of input contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

  The first line of each test case contains two integers, m and x (1 ≤ m ≤ 50, 1 ≤ x ≤ 10^8) — the total number of months and the monthly salary.

  The i-th of the following m lines contains two integers, ci and hi (0 ≤ ci ≤ 10^8, 1 ≤ hi ≤ 10^3) — the cost and happiness on offer for the i-th month. 
  Note that some happiness may be free (ci = 0 for some i's).

  It is guaranteed that the sum of ∑ihi over all test cases does not exceed 10^5.

  Output
  For each test case, print a single integer, the maximum sum of happiness Charlie could obtain.
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
  ll t, m, x;
  cin >> t;
	while(t --) {
		cin>>m>>x;
		vector<ll> dp(100010, 1e18);
		dp[0] = 0;
		int ans = 0;
		for(int i = 0, c, h, sum = 0; i < m; i ++) {
			cin >> c >> h;
			sum += h;
			for(int j = sum; j >= h; j --) {
				if(dp[j - h] + c <= x * i) dp[j] = min(dp[j], dp[j - h] + c);
				if(dp[j] < 1e18) ans = max(ans, j);
			}
		}
		cout << ans << endl;
	}
  
  return 0;
}