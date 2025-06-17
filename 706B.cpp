#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, o;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cin >> o;
    for (int i = 0; i < o; ++i) {
        int y;
        cin >> y;

        int c = upper_bound(v.begin(), v.end(), y) - v.begin();
        cout << c << endl;
    }

    return 0;
}
