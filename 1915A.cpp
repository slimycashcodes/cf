#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b){
        return c;
    }
    else if(b==c){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n;
    cin >> n;
    while(n--){
        cout << solve() << endl;
    }
}
