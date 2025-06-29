#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n%3) cout << "First";
    else cout << "Second";
    cout << "\n";
}


int main(){
    int n;
    cin >> n;
    while(n--){
        int no;
        cin >> no;
        solve(no);
    }
    return 0;
}
