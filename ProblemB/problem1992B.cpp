/*
  Author : Nguyen Duc Gia Huy
  Date(DD/MM/YYYY): 13-07-2024
*/
/*
  https://codeforces.com/problemset/problem/1992/B
  B. Angry Monk
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  - 
  To celebrate his recovery, k1o0n has baked an enormous n metres long potato casserole.

  Turns out, Noobish_Monk just can't stand potatoes, so he decided to ruin k1o0n's meal. He has cut it into k pieces, of lengths a1,a2,…,ak meters.

  k1o0n wasn't keen on that. Luckily, everything can be fixed. In order to do that, k1o0n can do one of the following operations:

  - Pick a piece with length ai≥2 and divide it into two pieces with lengths 1 and ai−1. As a result, the number of pieces will increase by 1;
  - Pick a slice ai and another slice with length aj=1 (i≠j) and merge them into one piece with length ai+1. As a result, the number of pieces will decrease by 1.
  Help k1o0n to find the minimum number of operations he needs to do in order to merge the casserole into one piece with length n.

  For example, if n=5, k=2 and a=[3,2], it is optimal to do the following:

  - Divide the piece with length 2 into two pieces with lengths 2−1=1 and 1, as a result a=[3,1,1].
  - Merge the piece with length 3 and the piece with length 1, as a result a=[4,1].
  - Merge the piece with length 4 and the piece with length 1, as a result a=[5].

  Input
  Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 10^4).

  Description of each test case consists of two lines. The first line contains two integers n and k (2 ≤ n ≤ 10^9, 2 ≤ k ≤ 10^5) — length of casserole and the number of pieces.

  The second line contains k integers a1,a2,…,ak (1 ≤ ai ≤ n−1, ∑ai=n) — lengths of pieces of casserole, which Noobish_Monk has cut.

  It is guaranteed that the sum of k over all t test cases doesn't exceed 2⋅10^5.

  Output
  For each test case, output the minimum number of operations K1o0n needs to restore his pie after the terror of Noobish_Monk.
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
    int n, k, sum = 0;
    cin >> n >> k;
    int a[k];
    for(int i = 0; i < k; i++) {
      cin >> a[i];
    }
    sort(a, a + k);
    for(int i = 0; i < k - 1; i++) {
      if(a[i] == 0) sum++;
      else sum += (a[i] - 1) * 2 + 1;
    }
    cout << sum << endl;
  }
  
  return 0;
}