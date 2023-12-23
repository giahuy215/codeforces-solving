/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/gym/478458/problem/A
  A. Mật mã tình yêu
  time limit per test: 1 s.
  memory limit per test: 256 MB
  input: standard input
  output: standard output
  
  Tình yêu luôn chất chứa nhiều bí mật và dĩ nhiên tình yêu của Mely và bồ cô ấy cũng không ngoại lệ. 
  Mely và người yêu có một mật mã riêng với nhau theo một trong hai quy tắc sau:

  - nhân số hiện tại với 2 (có nghĩa là thay x bằng 2⋅x);
  - thêm chữ số 1 vào bên phải số hiện tại (có nghĩa là thay x bằng 10⋅x+1).
  Mely gửi cho người yêu một số a và người yêu của Mely theo quy tắc trên sẽ gửi lại cho Mely một số b. 
  Số b phải được biến đổi theo quy tắc trên từ a mà Mely gửi.
  Có vẻ như người yêu của Mely đang gặp vấn đề vì quên cách chuyển mật mã riêng của 2 người rồi. 
  Bạn có thể giúp người yêu Mely kiểm tra xem mình có nhớ đúng quy tắc không đi.
  Chú ý là bồ của Mely chỉ cần bạn giúp anh ấy tìm ra cách chuyển từ a sang b không cần ít thao tác nhất.

  Input
  Dòng đầu tiên chứa 2 số nguyên a và b (1 ≤ a < b ≤ 1e9) — con số Mely gửi và số bồ Mely định gửi.

  Output
  Nếu không có cách tạo được số b từ a, in "NO".
  Trường hợp còn lại in 3 dòng. Dòng đầu tiên in "YES". Dòng thứ hai chứa một số nguyên k — số bước chuyển đổi. 
  Dòng thứ 3 chứa k số nguyên x1,x2,…,xk, thoả mãn:

  x1 = a,
  xk = b,
  xi có thể được biến đổi từ xi−1 sử dụng một trong hai quy tắc đã nêu ở trên (1 < i ≤ k).
  Nếu có nhiều câu trả lời, in ra một phương án bất kì.
*/
#include <bits/stdc++.h>
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b;
  cin >> a >> b;
  vector<int> n;
  n.push_back(b);
  while (b > a)
  {
    if(b % 2 == 0) {
      b = b / 2;
      n.push_back(b);
    }
    else if((b - 1) % 10 == 0){
      b = (b - 1) / 10;
      n.push_back(b);
    } else {
      break;
    }
  }
  if(b == a) {
    cout << "YES" << "\n";
    cout << n.size() << "\n";
    ROF(i, 0, n.size()) {
      cout << n[i] << " ";
    }
  } else {
    cout << "NO";
  }

  return 0;
}