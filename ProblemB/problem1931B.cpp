/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/problemset/problem/1931/B
  B. Make Equal
  time limit per test: 2 seconds
  memory limit per test: 256 megabytes
  input: standard input
  output: standard output
  There are n containers of water lined up, numbered from left to right from 1 to n. Each container can hold any amount of water; 
  initially, the i-th container contains ai units of water. The sum of ai is divisible by n.

  You can apply the following operation any (possibly zero) number of times: pour any amount of water from the i-th container to the j-th container, 
  where i must be less than j (i.e. i<j). Any index can be chosen as i or j any number of times.

  Determine whether it is possible to make the amount of water in all containers the same using this operation.

  Input
  The first line of the input contains a single integer t (1 ≤ t ≤ 1e4) — the number of test cases. Then the descriptions of the test cases follow.

  The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅1e5) — the number of containers with water.

  The second line of each test case contains n integers a1,a2,…,an (0 ≤ ai ≤ 1e9) — the amounts of water in the containers. 
  It is guaranteed that the sum of ai in each test case does not exceed 2⋅1e9. Also, the sum of ai is divisible by n.

  It is guaranteed that the sum of n over all test cases in the input does not exceed 2⋅1e5.

  Output
  Output t lines, each of which is the answer to the corresponding test case. As the answer, output "YES" if it is possible to make the amount of water in all containers the same using the described operation. Otherwise, output "NO".

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
  while (t--)
  {
    int n, num = 0, temp = 0, cnt = 0;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
      num += a[i];
    }
    num /= n;
    FOR(i, 0, n) {
      if(a[i] > num) {
        temp += a[i] - num;
      } else if(a[i] < num){
        if(temp >= num - a[i]) {
          temp -= num - a[i];
        } else {
          cout << "NO" << endl;
          cnt++;
          break;
        }
      }
    }
    if(cnt == 0) cout << "YES" << endl;
  }

  return 0;
}