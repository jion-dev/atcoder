#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

long long ax, ay, bx, by, cx, cy;
int main() {
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  // each vector
  long long BAx = ax - bx, BAy = ay - by;
  long long BCx = cx - bx, BCy = cy - by;
  long long CAx = ax - cx, CAy = ay - cy;
  long long CBx = bx - cx, CBy = by - cy;

  int pattern = 2;
  if(BAx * BCx + BAy * BCy < 0LL)
    pattern = 1;
  if(CAx * CBx + CAy * CBy < 0LL)
    pattern = 3;

  double ans = 0.0;
  if(pattern == 1)
    ans = sqrt(BAx * BAx + BAy * BAy);
  if(pattern == 3)
    ans = sqrt(CAx * CAx + CAy * CAy);
  if(pattern == 2) {
    double s = abs(BAx * BCy - BAy * BCx);
    double BCLength = sqrt(BCx * BCx + BCy * BCy);
    ans = s / BCLength;
  }

  printf("%12lf\n", ans);
}
