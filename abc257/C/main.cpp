#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int f(long x, vector<long> ws, string s) {
  int corrected = 0;
  rep(i, s.size()) {
    if((s[i] == '0' && x > ws[i]) || s[i] == '1' && x < ws[i]) {
      corrected++;
    }
  }
  return corrected;
}

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<long> ws(n);

  rep(i, n) { cin >> ws[i]; };

  long max_w = *max_element(ws.begin(), ws.end());
  long min_w = *min_element(ws.begin(), ws.end());

  long diff = max_w - min_w;
  int max_corrected = 0;
  rep(i, diff + 2) {
    long x = min_w + i;
    max_corrected = max(f(x, ws, s), max_corrected);
    if(max_corrected == n)
      break;
  }

  cout << max_corrected << endl;
}
