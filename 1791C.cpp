#include <bits/stdc++.h>
using namespace std;

int solve(){
    int s;
    cin >> s;
    string bs;
    cin >> bs;
    int st=0,en=bs.size()-1;
    while(st<=en){
        if(st==en){return 1;}
        if(bs[st]==bs[en]){
            return en-st+1;
        }
        st++;
        en--;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        cout << solve() << endl;
    }
}
