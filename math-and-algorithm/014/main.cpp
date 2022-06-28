#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  long long N;
  cin >> N;

  // 素因数分解（空白区切りで出力）
  bool flag = false;
  for(long long i = 2; i * i <= N; i++) {
    // iで破り続ける
    while(N % i == 0) {
      if(flag == true)
        cout << " ";
      flag = true;
      N /= i;
      cout << i;
    }
  }
  //最後に残ったのは素数なので付け加える
  if(N >= 2) {
    if(flag == true)
      cout << " ";
    flag = true;
    cout << N;
  }
  cout << endl;
  return 0;
}
