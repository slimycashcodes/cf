#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    string ans = "abc";
    if(strcmp(s.c_str(),ans.c_str())==0){
        cout << "YES" << endl;
        return;
    }
    vector <vector <int>> v = {{0,1},{0,2},{1,2}};
    for(auto i : v){
        swap(s[i[0]],s[i[1]]);
        if(strcmp(s.c_str(),ans.c_str())==0){
            cout << "YES" << endl;
            return;
        }
        swap(s[i[0]],s[i[1]]);
    }
    cout << "NO" << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
