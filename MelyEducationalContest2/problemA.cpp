/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/gym/470856/problem/A
  A. Mely Casting Call
  time limit per test: 1 s.
  memory limit per test: 256 MB
  input: standard input
  output: standard output
  
  Tại đài thiên văn vũ trụ của NASA bỗng nhận được một tín hiệu rất lạ từ ngoài vũ trụ, tất cả mọi người đều vô cùng bất ngờ và hồi hộp chờ đợi xem tín hiệu có phải đến từ người ngoài hành tinh 
  hay không...Bip..bịp..bịp..Từ đầu dây bên kia vang lên một âm thanh khiến mọi người phải nín thở chờ đợi...Âm thanh của cuộc gọi thông báo rằng: Code Mely đang tuyển CTV gen 0.5, 
  mời các bạn trở thành thuyền viên cùng Code Mely tiến ra ngoài vũ trụ. Thông tin đăng ký trở thành CTV Gen 0.5 Code MeLy các bạn có thể theo dõi qua fanpage Code Mely trên Facebook nhé!

  Hồ Thị Mê Ly gửi tặng kèm các bạn một bài toán để gây ấn tượng được với cô ấy, bài toán tưởng khó nhưng lại rất đơn giản vì thế nếu ai thua sẽ phải kêu "MEO MEO".

  Hồ Thị Mê Ly cho một dãy a độ dài n. Nhiệm vụ là tìm đúng 3 số trong dãy sao cho tổng 3 số đó là số lẻ. Vì các thành viên không ai muốn kêu "MEO MEO" cả nên cần bạn giúp đỡ.

  Input
  Dòng đầu tiên gồm một số nguyên t (1 ≤ t ≤ 1e4) — là số lượng testcase.

  Với mỗi testcase, dòng đầu gồm duy nhất số nguyên n (3 ≤ n ≤ 300) — kích thước của dãy a.

  Dòng thứ hai gồm n số nguyên a1,a2,…,an (1 ≤ ai ≤ 1e5) — mô tả dãy a.

  Dữ liệu đảm bảo tổng của các số n trong tất cả các testcase không lớn hơn 2⋅1e5.

  Output
  Với mỗi testcase, dòng thứ nhất in một từ "YES" nếu tìm thấy 3 số với tổng là số lẻ hoặc "NO" nếu không thể tìm thấy.

  Nếu có thể tìm ra 3 số với tổng là số lẻ, thì dòng thứ 2 in ra 3 số nguyên i,j,k (1 ≤ i,j,k ≤ n) — là chỉ số của các số tìm được.
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, even = 0, odd = 0;
    cin >> n;
    int a[n];
    FOR(i, 0, n) {
      cin >> a[i];
      if((a[i] & 1) == 0) {
        even++;
      } else {
        odd++;
      }
    }
    
    if(odd == 0 || (odd == 2 && even == 1)) {
      cout << "NO" << endl;
    } else if(odd >= 3) {
      cout << "YES" << endl;
      int cnt = 3;
      FOR(i, 0, n) {
        if((a[i] & 1) == 1) {
          cout << i + 1 << " ";
          cnt--;
        } 
        if(cnt == 0) {
          break;
        }
      }
      cout << endl;
    } else if(even >= 2 && odd >= 1 && odd <= 2) {
      cout << "YES" << endl;
      int c = 2, b = 1;
      FOR(i, 0, n) {
        if((a[i] & 1) == 0 && c > 0) {
          cout << i + 1 << " ";
          c--;
        }
        if((a[i] & 1) == 1 && b > 0) {
          cout << i + 1 << " ";
          b--;
        }
        if(c == 0 && b == 0) {
          break;
        }
      }
      cout << endl;
    }
  }
  

  return 0;
}