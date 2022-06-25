#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  // 英大文字が文字列の中に現れる。
  // 英小文字が文字列の中に現れる。
  // 全ての文字が相異なる。

  string s;
  cin >> s;

  string uppers = "";
  string lowers = "";

  bool can = true;

  rep(i, s.size()) {
    //小文字
    if((s[i] >= 'a') && (s[i] <= 'z')) {
      // 文字が含まれているか
      size_t pos = lowers.find(s[i]);
      if(pos != string::npos) {
        can = false;
        break;
      } else {
        lowers += s[i];
      }
    }
    //大文字
    else {
      // 文字が含まれているか
      size_t pos = uppers.find(s[i]);
      if(pos != string::npos) {
        can = false;
        break;
      } else {
        uppers += s[i];
      }
    }
  }

  if(uppers == "" || lowers == "") {
    can = false;
  }

  if(can) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
