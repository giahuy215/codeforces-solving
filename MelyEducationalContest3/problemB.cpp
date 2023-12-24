/*
  Author : Nguyen Duc Gia Huy
*/
/*
  https://codeforces.com/gym/478458/problem/B
  B. Đi tìm người yêu
  time limit per test: 1 s.
  memory limit per test: 64 MB
  input: standard input
  output: standard output

  Mê Ly đang đứng trên một bàn cờ và tối nay anh có hẹn với người yêu để cùng đi chơi Halloween. Giả sử người yêu anh đang đứng ở ô t. 
  Do sợ ma nhưng mà lại chậm chạp nên anh ấy muốn nhờ bạn chỉ ra đường đi ngắn nhất từ ô s tới t. Hãy giúp anh ấy bằng không đến muộn người yêu sẽ bỏ anh ấy mất.
  https://espresso.codeforces.com/e37ce721ce6cd184171bd7214f60ec0e280bd0da.png (image)
  Ở một bước đi, Mê ly có thể đi đến một ô vuông khác có chung cạnh hoặc chung đỉnh với ô hiện đang đứng.

  Input
  Dòng đầu tiên cho biết vị trí của ô s, Dòng thứ hai — thì là ô t.
  Vị trí của một ô bao gồm hai kí tự, đầu tiên là một chữ cái in thường (từ a đến h), tiếp đó là một chữ số từ 1 đến 8.

  Output
  Dòng đầu in ra một số n — Số bước đi ngắn nhất của Mê ly. Ở n dòng tiếp theo in ra các bước đi đó. 
  Mỗi bước đi sẽ được miêu tả bằng 1 trong 8 hướng sau: L, R, U, D, LU, LD, RU or RD.
  L, R, U, D tượng trưng cho di chuyển trái, phải, lên, xuống như trong hình, và 2 kí tự liên tiếp thì biểu diễn bước đi chéo. 
  Nếu có nhiều đáp án, bạn có thể in bất kì đáp án nào.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s, t;
  cin >> s >> t;
  int s1 = s[0], t1 = t[0], s2 = s[1], t2 = t[1];
  cout << max(abs(s1 - t1), abs(s2 - t2)) << "\n";
  while (true)
  {
    if(s1 == t1 && s2 == t2) break;
    if(s1 == t1) {
      if(s2 > t2) {
        cout << "D" << "\n";
        s2--;
      }
      else {
        cout << "U" << "\n";
        s2++;
      }
    } else if(s2 == t2) {
      if(s1 > t1) {
        cout << "L" << "\n";
        s1--;
      } else {
        cout << "R" << "\n";
        s1++;
      }
    } else if(s1 > t1) {
      if(s2 > t2) {
        cout << "LD" << "\n";
        s1--;
        s2--;
      } else {
        cout << "LU" << "\n";
        s1--;
        s2++;
      }
    } else if(s1 < t1) {
      if(s2 > t2) {
        cout << "RD" << "\n";
        s1++;
        s2--;
      } else {
        cout << "RU" << "\n";
        s1++;
        s2++;
      }
    }
  }
  
  return 0;
}