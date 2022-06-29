#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;

  long long red_count = 0;
  long long yellow_count = 0;
  long long blue_count = 0;

  rep(i, n) {
    int a;
    cin >> a;
    if(a == 1)
      red_count++;
    if(a == 2)
      yellow_count++;
    if(a == 3)
      blue_count++;
  }

  long long red_top_factorial = 1;
  long long red_bottom_factorial = 1;
  long long yellow_top_factorial = 1;
  long long yellow_bottom_factorial = 1;
  long long blue_top_factorial = 1;
  long long blue_bottom_factorial = 1;
  rep(i, 2) {
    red_top_factorial *= red_count - i;
    red_bottom_factorial *= 2 - i;
    yellow_top_factorial *= yellow_count - i;
    yellow_bottom_factorial *= 2 - i;
    blue_top_factorial *= blue_count - i;
    blue_bottom_factorial *= 2 - i;
  }
  long long red = red_top_factorial / red_bottom_factorial;
  long long yellow = yellow_top_factorial / yellow_bottom_factorial;
  long long blue = blue_top_factorial / blue_bottom_factorial;

  cout << red + yellow + blue << endl;
}
