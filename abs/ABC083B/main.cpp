#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 1; i < (int)(n); i++)

int sumDigits(int n) {
  int sum = 0;
  //自然数の各桁の和を計算
  while(n != 0) {
    // sumDigitsは単独ではloopしないので、while loopを使う。
    sum += n % 10;
    //再右端の桁を得るために%10を利用する。
    n /= 10;
    //再右端の桁を取り除くためにn/=10を利用する。
  }

  return sum; //合計を返す
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int sum = 0;
  rep(i, N + 1) {
    int val = sumDigits(i);
    if(val >= A && val <= B) {
      sum += i;
    }
  }

  cout << sum << endl;
}
