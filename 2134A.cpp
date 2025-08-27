#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int n,a,b;
    cin >> n >> a >> b;
    if(n%2!=b%2){
        return false;
    }
    if (a>b && n%2!=(a)%2){
        return false;
    }
    return true;

}


int main(){
    int n;
    cin >> n;
    while(n--){
        if(solve()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
