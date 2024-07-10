/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 11-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1969/A
  A. Two Friends
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  Monocarp wants to throw a party. He has n friends, and he wants to have at least 2 of them at his party.

  The i-th friend's best friend is pi. All pi are distinct, and for every i ∈ [1,n], pi ≠ i.

  Monocarp can send invitations to friends. 
  The i-th friend comes to the party if both the i-th friend and the pi-th friend receive an invitation (note that the pi-th friend doesn't have to actually come to the party). 
  Each invitation is sent to exactly one of the friends.

  For example, if p=[3,1,2,5,4], and Monocarp sends invitations to the friends [1,2,4,5], 
  then the friends [2,4,5] will come to the party. The friend 1 won't come since his best friend didn't receive an invitation; 
  the friend 3 won't come since he didn't receive an invitation.

  Calculate the minimum number of invitations Monocarp has to send so that at least 2 friends come to the party.

  Input
  The first line contains one integer t (1 ≤ t ≤ 5000) — the number of test cases.

  Each test case consists of two lines:

  - the first line contains one integer n (2 ≤ n ≤ 50) — the number of friends;
  - the second line contains n integers p1,p2,…,pn (1 ≤ pi ≤ n; pi ≠ i; all pi are distinct).

  Output
  Print one integer — the minimum number of invitations Monocarp has to send.
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
    int n, cnt = 0;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
      if(a[a[i]] == i) {
        cnt++;
        break;
      }
    }
    cout << (cnt == 0 ? 3 : 2) << "\n"; 
  }
  
  return 0;
}