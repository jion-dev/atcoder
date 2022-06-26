#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

long long calc_gcd(long long x, long long y) {
  return (x % y) ? calc_gcd(y, x % y) : y;
}

int main() {
  long long a, b, c;
  cin >> a >> b >> c;

  // 最大公約数を求める=編の長さ
  long long length = calc_gcd(a, calc_gcd(b, c));

  long long count = 0;

  count += (a % length) ? 0 : a / length - 1;
  count += (b % length) ? 0 : b / length - 1;
  count += (c % length) ? 0 : c / length - 1;

  cout << count << endl;
}
