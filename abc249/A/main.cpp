#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int solve(int a, int b, int c, int x) {
  int cycle = x / (a + c);
  int rest = x % (a + c);

  return (cycle * a + min(rest, a)) * b;
}

int main() {
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int takahashi = solve(a, b, c, x);
  int aoki = solve(d, e, f, x);

  if(takahashi > aoki) {
    cout << "Takahashi" << endl;
  } else if(takahashi < aoki) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
}
