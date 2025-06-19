#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ss, ans;

    for (auto i : s) {

        if (ss.empty()) {
            if (i == '.') {
                ans += '0';
            } else {
                ss += i;  // likely '-'
            }
        }
        else if (!ss.empty() && ss == "-") {
            if (i == '.') {
                ans += '1';
                ss = "";
            } else if (i == '-') {
                ans += '2';
                ss = "";
            }
        }
    }

    cout << ans << endl;
    return 0;
}
