#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, Y;
  cin >> N >> Y;

  int x = -1, y = -1, z = -1;
  for(int a = 0; a <= N; ++a) {
    for(int b = 0; b + a <= N; ++b) {
      int c = N - a - b;
      int total = 10000 * a + 5000 * b + 1000 * c;
      if(total == Y) {
        x = a;
        y = b;
        z = c;
      }
    }
  }
  cout << x << " " << y << " " << z << endl;
}
