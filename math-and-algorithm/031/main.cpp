#include <algorithm>
#include <iostream>
using namespace std;

long long N, A[500009];
long long dp1[500009], dp2[500009];

int main() {
  // 入力
  // 5
  // 2 5 3 3 1

  // 8

  cin >> N;
  for(int i = 1; i <= N; i++)
    cin >> A[i];

  // 配列の初期化
  dp1[0] = 0;
  dp2[0] = 0;

  // 動的計画法
  for(int i = 1; i <= N; i++) {
    dp1[i] = dp2[i - 1] + A[i]; // 最大値から実力更新するdp
    // 0, 2, 5, 5, 8, 6
    dp2[i] = max(dp1[i - 1], dp2[i - 1]); //これまでの最大値を記録
    // 0, 0, 2, 5, 5, 8
  }

  // 答えを出力
  cout << max(dp1[N], dp2[N]) << endl;
  return 0;
}
