/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/group/J9XVs25cLt/contest/465037/problem/B
  B. chưa nghĩ ra 1
  time limit per test: 1 s.
  memory limit per test: 256 MB
  input: standard input
  output: standard output

  Bạn được cho một mảng a gồm n số nguyên dương (lớn hơn không).

  Trong mỗi bước, bạn có thể chọn hai chỉ số i và j (i ≠ j) sao cho hiệu tuyệt đối giữa ai và aj không quá một (|ai − aj| ≤ 1) và loại bỏ phần tử nhỏ hơn trong hai phần tử này. 
  Nếu hai phần tử bằng nhau, bạn có thể loại bỏ bất kỳ phần tử nào trong hai phần tử đó (nhưng chỉ loại bỏ một phần tử).

  Nhiệm vụ của bạn là tìm xem có thể thu được mảng chỉ gồm một phần tử bằng cách thực hiện một số bước (có thể không thực hiện bước nào) như đã mô tả trong đề bài hay không.

  Input
  Dòng đầu tiên chứa số nguyên t (1 ≤ t ≤ 1000) — số lượng bộ test. Tiếp theo là t bộ test.

  Mỗi bộ test bắt đầu bằng một số nguyên n (1 ≤ n ≤ 50) — độ dài của mảng a. Dòng tiếp theo của mỗi bộ test chứa n số nguyên a1,a2,…,an (1 ≤ ai ≤ 100), trong đó ai là phần tử thứ i của mảng a.

  Output
  Đối với mỗi bộ test, in ra câu trả lời: "YES" nếu có thể thu được mảng chỉ gồm một phần tử bằng cách thực hiện một số bước (có thể không thực hiện bước nào) như đã mô tả trong đề bài, hoặc "NO" nếu không thể.
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
    int n, cnt = 0;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
    }
    sort(a, a + n);
    FOR(i, 1, n) {
      if(a[i] - a[i - 1] > 1) {
        cout << "NO" << endl;
        cnt++;
        break;
      }
    }
    
    if(cnt == 0) cout << "YES" << endl;
  }
  

  return 0;
}