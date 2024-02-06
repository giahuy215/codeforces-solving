/*
  Author : Nguyen Duc Gia Huy
*/
/*
  C. chưa nghĩ ra 2
  time limit per test: 2 s.
  memory limit per test: 256 MB
  input: standard input
  output: standard output

  Bạn được cho một mảng a gồm n số nguyên dương (n ≥ 3). Điều này có nghĩa là trong mảng này, tất cả các số trừ một số là giống nhau (ví dụ: trong mảng [4,11,4,4] tất cả các số trừ một số là bằng 4).

  Hãy in ra chỉ số của phần tử không bằng các phần tử còn lại trong mảng. Các số trong mảng được đánh số từ một.

  Input
  Dòng đầu tiên chứa một số nguyên t (1 ≤ t ≤ 100) — số lượng bộ test. Tiếp theo là t bộ test.

  Mỗi bộ test bắt đầu bằng một số nguyên n (3 ≤ n ≤ 100) — độ dài của mảng a. Dòng tiếp theo của mỗi bộ test chứa n số nguyên a1,a2,…,an (1 ≤ ai ≤ 100).

  Đảm bảo rằng trong mảng a, tất cả các số trừ một số đều giống nhau.

  Output
  Đối với mỗi bộ test, in ra một số nguyên duy nhất — chỉ số của phần tử không bằng các phần tử còn lại trong mảng.
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
    int n;
    cin >> n;
    pair<int, int> p[n];
    FOR(i, 0, n) {
      cin >> p[i].first;
      p[i].second = i;
    }
    sort(p, p + n);
    if(p[0].first == p[1].first) {
      cout << p[n - 1].second + 1 << endl;
    } else {
      cout << p[0].second + 1 << endl;
    }
  }

  return 0;
}