/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/contest/1927/problem/C
  C. Choose the Different Ones!
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  
  Given an array 𝑎 of 𝑛 integers, an array 𝑏 of 𝑚 integers, and an even number 𝑘.
  
  Your task is to determine whether it is possible to choose exactly 𝑘2 elements from both arrays in such a way that among the chosen elements, every integer from 1 to 𝑘 is included.
  
  For example:
  
  If 𝑎=[2,3,8,5,6,5], 𝑏=[1,3,4,10,5], 𝑘=6, then it is possible to choose elements with values 2,3,6 from array 𝑎 and elements with values 1,4,5 from array 𝑏. 
  In this case, all numbers from 1 to 𝑘=6 will be included among the chosen elements.
  If 𝑎=[2,3,4,5,6,5], 𝑏=[1,3,8,10,3], 𝑘=6, then it is not possible to choose elements in the required way.
  Note that you are not required to find a way to choose the elements — your program should only check whether it is possible to choose the elements in the required way.
  
  Input
  The first line of the input contains a single integer 𝑡 (1 ≤ 𝑡 ≤ 1e4) — the number of test cases. The descriptions of the test cases follow.
  
  The first line of each test case contains three integers 𝑛, 𝑚, and 𝑘 (1 ≤ 𝑛,𝑚 ≤ 2⋅1e5, 2 ≤ 𝑘 ≤ 2⋅min(𝑛,𝑚), 𝑘 is even) — the length of array 𝑎, 
  the length of array 𝑏, and the number of elements to be chosen, respectively.
  
  The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1 ≤ 𝑎𝑖 ≤ 1e6) — the elements of array 𝑎.
  
  The third line of each test case contains 𝑚 integers 𝑏1,𝑏2,…,𝑏𝑚 (1 ≤ 𝑏𝑗 ≤ 1e6) — the elements of array 𝑏.
  
  It is guaranteed that the sum of values 𝑛 and 𝑚 over all test cases in a test does not exceed 4⋅1e5.
  
  Output
  Output 𝑡 lines, each of which is the answer to the corresponding test case. 
  As the answer, output "YES" if it is possible to choose 𝑘2 numbers from each array in such a way that among the chosen elements, 
  every integer from 1 to 𝑘 is included. Otherwise, output "NO".
  
  You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.
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
    int n, m, k, cnt = 0;
    cin >> n >> m >> k;
    int a[n], b[m];
    set<int> c, d, e;
    FOR(i, 0, n) {
      cin >> a[i];
      if(a[i] <= k) {
        c.insert(a[i]);
        e.insert(a[i]);
      }
    }
    FOR(i, 0, m) {
      cin >> b[i];
      if(b[i] <= k) {
        d.insert(b[i]);
        e.insert(b[i]);
      }
    }
    if(c.size() < k / 2 || d.size() < k / 2 ) cout << "NO" << endl;
    else {
      if(e.size() == k) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }
 
  return 0;
}
