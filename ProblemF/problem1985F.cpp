/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 29-06-2024
*/
/*
  https://codeforces.com/contest/1985/problem/F
  F. Final Boss
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are facing the final boss in your favorite video game. The boss enemy has h health. Your character has n attacks. 
  The i'th attack deals ai damage to the boss but has a cooldown of ci turns, meaning the next time you can use this attack is turn x+ci if your current turn is x. 
  Each turn, you can use all attacks that are not currently on cooldown, all at once. If all attacks are on cooldown, you do nothing for the turn and skip to the next turn.

  Initially, all attacks are not on cooldown. How many turns will you take to beat the boss? The boss is beaten when its health is 0 or less.

  Input
  The first line contains t (1 ≤ t ≤ 10^4)  – the number of test cases.

  The first line of each test case contains two integers h and n (1 ≤ h,n ≤ 2⋅10^5) – the health of the boss and the number of attacks you have.

  The following line of each test case contains n integers a1,a2,...,an (1 ≤ ai ≤ 2⋅10^5) – the damage of your attacks.

  The following line of each test case contains n integers c1,c2,...,cn (1 ≤ ci ≤ 2⋅10^5) – the cooldown of your attacks.

  It is guaranteed that the sum of h and n over all test cases does not exceed 2⋅10^5.

  Output
  For each test case, output an integer, the minimum number of turns required to beat the boss.
*/
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
ll n, h;
ll bns(ll l, ll r, ll a[], ll c[]) {
  if(l == r - 1) return r;
  ll mid = (l + r) / 2;
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    sum += ((mid - 1) / c[i] + 1) * a[i];
    if(sum >= h) {
      return bns(l, mid, a, c);
    }
  }
  return bns(mid, r, a, c);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    cin >> h >> n;
    ll a[n], c[n];
    for(ll i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(ll i = 0; i < n; i++) {
      cin >> c[i];
    }
    cout << bns(0 , 1e12, a, c) << endl;
  }
  
  return 0;
}