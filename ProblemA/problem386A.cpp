/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/386/problem/A
  A. Second-Price Auction
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  In this problem we consider a special type of an auction, which is called the second-price auction. As in regular auction n bidders place a bid which is price a bidder ready to pay. 
  The auction is closed, that is, each bidder secretly informs the organizer of the auction price he is willing to pay. After that, the auction winner is the participant who offered the highest price. 
  However, he pay not the price he offers, but the highest price among the offers of other participants (hence the name: the second-price auction).

  Write a program that reads prices offered by bidders and finds the winner and the price he will pay. Consider that all of the offered prices are different.

  Input
  The first line of the input contains n (2 ≤ n ≤ 1000) — number of bidders. 
  The second line contains n distinct integer numbers p1, p2, ... pn, separated by single spaces (1 ≤ pi ≤ 10000), where pi stands for the price offered by the i-th bidder.

  Output
  The single output line should contain two integers: index of the winner and the price he will pay. Indices are 1-based.
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
  int n, mx = 0, idx;
  cin >> n;
  int a[n];
  FOR(i, 0, n) {
    cin >> a[i];
    if(a[i] > mx) {
      mx = a[i];
      idx = i;
    }
  }
  sort(a, a + n);
  cout << idx + 1 << " " << a[n - 2];
 
  return 0;
}