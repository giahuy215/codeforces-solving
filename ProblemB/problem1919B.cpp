/*
  Author: Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1919/problem/B
  B. Plus-Minus Split
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output

  You are given a string s of length n consisting of characters "+" and "-". 
  s represents an array a of length n defined by ai = 1 if si = "+" and ai = −1 if si = "-".

  You will do the following process to calculate your penalty:

  Split a into non-empty arrays b1,b2,…,bk such that b1+b2+…+bk=a†, where + denotes array concatenation.
  The penalty of a single array is the absolute value of its sum multiplied by its length. In other words, for some array c of length m, its penalty is calculated as p(c)=|c1+c2+…+cm|⋅m.
  The total penalty that you will receive is p(b1) + p(b2) + … + p(bk).
  If you perform the above process optimally, find the minimum possible penalty you will receive.

  † Some valid ways to split a=[3,1,4,1,5] into (b1,b2,…,bk) are ([3],[1],[4],[1],[5]), ([3,1],[4,1,5]) 
  and ([3,1,4,1,5]) while some invalid ways to split a are ([3,1],[1,5]), ([3],[],[1,4],[1,5]) and ([3,4],[5,1,1]).

  Input
  Each test contains multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases. The description of the test cases follows.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 5000) — the length of string s.

  The second line of each test case contains string s (si ∈ {+,−}, |s| = n).

  Note that there are no constraints on the sum of n over all test cases.

  Output
  For each test case, output a single integer representing the minimum possible penalty you will receive.
*/
#include<bits/stdc++.h>
 
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
        for(int i = 0; i < n; i++) {
            if(s[i] == '+') sum++; 
            else sum--;
        }
        cout << abs(sum) << endl;
    }
    
    return 0;
}