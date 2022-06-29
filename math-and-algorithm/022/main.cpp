#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int S = 100000;
  int n;
  cin >> n;
  int a[n];
  vector<long long> cnt(S);
  long long ans = 0;
  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++) {
    cnt[a[i]]++;
  }

  for(int i = 1; i < S / 2; i++) {
    ans += cnt[i] * cnt[S - i];
  }
  // 5000の時は例外でnCrを求める
  ans += cnt[S / 2] * (cnt[S / 2] - 1) / 2;

  cout << ans << endl;
}
