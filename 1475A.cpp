#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n ;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        long long s;
        cin >> s;
        if(s & (s-1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
