#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    string ans= "";
    int st = 0;
    char ls;
    while(st < size(s)){
        if(st<=1 || st==size(s)-1){
            ans+=s[st];
        }
        else{
            if(st%2!=0){
                ans+=s[st];
            }
        }
        st++;
    }
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
