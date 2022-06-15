#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int N;

int calc_count(vector<int> even_list, int count) {
  rep(i, N) {
    if(even_list.at(i) % 2 != 0) {
      return count;
    }
    even_list.at(i) /= 2;
  }
  count++;
  return calc_count(even_list, count);
}

int main() {
  cin >> N;

  int count = 0;
  vector<int> even_list(N);
  rep(i, N) {
    int s;
    cin >> s;
    if(s % 2 != 0) {
      cout << count << endl;
      return 0;
    } else {
      even_list.at(i) = s;
    }
  }
  count = calc_count(even_list, count);

  cout << count << endl;
}
