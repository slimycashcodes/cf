#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin >> n;
    if(n%2020==0 || n%2021==0 || n%4041==0){
        return "YES";
    }
    for(int i=0;i<n/2020;i++){
        if((n-(i*2020))%2021==0){
            return "YES";
        }
    }
    return "NO";
}


int main(){
    int n;
    cin >> n;
    while(n--){
        cout << solve() << endl;
    }
}
