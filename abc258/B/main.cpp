#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> A(n, vector<int>(n));

  int max_int = 0;
  rep(i, n) {
    string a_str;
    cin >> a_str;
    rep(j, n) {
      int a = a_str[j] - '0';
      max_int = max(a, max_int);
      A[i][j] = a;
    }
  }
  pair<string, int> max_direction;
  vector<string> ansArray;
  rep(i, n) {
    rep(j, n) {
      if(A[i][j] != max_int)
        continue;
      int above = i == 0 ? A[n - 1][j] : A[i - 1][j];
      max_direction = {"above", above};
      int below = i == n - 1 ? A[0][j] : A[i + 1][j];
      max_direction = below > max_direction.second ? make_pair("below", below)
                                                   : max_direction;

      int left = j == 0 ? A[i][n - 1] : A[i][j - 1];
      max_direction =
          left > max_direction.second ? make_pair("left", left) : max_direction;
      int right = j == n - 1 ? A[i][0] : A[i][j + 1];
      max_direction = right > max_direction.second ? make_pair("right", right)
                                                   : max_direction;
      int above_right = A[i == 0 ? n - 1 : i - 1][j == n - 1 ? 0 : j + 1];
      max_direction = above_right > max_direction.second
                          ? make_pair("above_right", above_right)
                          : max_direction;
      int bottom_right = A[i == n - 1 ? 0 : i + 1][j == n - 1 ? 0 : j + 1];
      max_direction = bottom_right > max_direction.second
                          ? make_pair("bottom_right", bottom_right)
                          : max_direction;
      int above_left = A[i == 0 ? n - 1 : i - 1][j == 0 ? n - 1 : j - 1];
      max_direction = above_left > max_direction.second
                          ? make_pair("above_left", above_left)
                          : max_direction;
      int bottom_left = A[i == n - 1 ? 0 : i + 1][j == 0 ? n - 1 : j - 1];
      max_direction = bottom_left > max_direction.second
                          ? make_pair("bottom_left", bottom_left)
                          : max_direction;
      string ans = to_string(max_int);
      for(int k; k < n; k++) {
        int i_above_target = i == 0 ? n - 1 : i - 1;
        int i_bottom_target = i == n - 1 ? 0 : i + 1;
        int i_target = (max_direction.first == "above" ||
                        max_direction.first == "above_right" ||
                        max_direction.first == "above_left")
                           ? i_above_target
                           : i_bottom_target;
        int j_right_target = j == n - 1 ? 0 : j + 1;
        int j_left_target = j == 0 ? n - 1 : j - 1;
        int j_target = (max_direction.first == "right" ||
                        max_direction.first == "above_right" ||
                        max_direction.first == "bottom_right")
                           ? j_right_target
                           : j_left_target;
        i = i_target;
        j = j_target;
        ans += to_string(A[i][j]);
      }
      ansArray.push_back(ans);
    }
  }

  int ans = 0;
  rep(i, ansArray.size()) { ans = max(stoi(ansArray[i]), ans); }

  cout << ans << endl;

  return 0;
}
