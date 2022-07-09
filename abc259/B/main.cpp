#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define pi 3.14159265358979323846

int main() {
  int a, b, d;
  cin >> a >> b >> d;

  // x′=xcosθ−ysinθ
  // y′=xsinθ+ycosθ
  double rad = d * pi / 180;

  double ansX = a * cos(rad) - b * sin(rad);
  double ansY = a * sin(rad) + b * cos(rad);

  printf("%.12lf %.12lf", ansX, ansY);
  return 0;
}
