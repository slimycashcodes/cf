#include <bits/stdc++.h>
using namespace std;

int solve(){
    int no;
    cin >> no;
    int c = 1;
    int n ;
    while(no){
        if(c%3!=0 && c%10!=3){
            n = c;
            no--;
        }
        c++;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        cout << solve() << endl;
    }
    return 0;
}
