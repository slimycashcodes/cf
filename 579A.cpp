#include <bits/stdc++.h>
using namespace std;

int cc(int n) {
    int c = 0;
    while (n) {
        n &= (n - 1); 
        c++;
    }
    return c;
}

int main(){
    int n;
    cin >> n;
    cout << cc(n);
    return 0;
}
