#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  long long n, k;
  cin >> n >> k;

  long long as[n];
  long long bs[n];

  rep(i, n) { cin >> as[i]; }
  rep(i, n) { cin >> bs[i]; }

  long long diff = 0;
  rep(i, n) diff += abs(as[i] - bs[i]);
  if(diff > k) {
    cout << "No" << endl;
    return 0;
  }

  if(diff % 2 != k % 2) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
