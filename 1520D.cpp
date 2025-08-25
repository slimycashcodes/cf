#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,x;
    long long c = 0;
    cin >> l;
    unordered_map <long long,long long> m;
    for(int i=0;i<l;i++){
        cin >> x;
        c += m[x-i] ;
        m[x-i] ++;

    }
    cout << c << endl;

}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}
