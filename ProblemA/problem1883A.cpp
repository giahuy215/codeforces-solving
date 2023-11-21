#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b-1); i >= (a); i--)

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while (t-- > 0){
    string s;
    cin>>s;
    int temp = 1, sum = 0;
    FOR(i,0,4){
      int a = s[i] - '0';
      if(a == 0) {
        a = 10;
      }
      sum = sum + abs(temp - a) + 1;
      temp = a;
    }
    cout<<sum<<endl;
  }
  
  return 0;
}