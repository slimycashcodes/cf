#include <bits/stdc++.h>
using namespace std;

bool p(int n) {
    if (n <= 1) return false;            
    if (n <= 3) return true;             
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    int a = 4;
    int b = n-a;
    int no = n;
    while(n){
        if(not p(a) && not p(b)){
            cout << a << " " << b << endl;
            return 0;
        }
        else{
            a++;
            b--;
            continue;
        }

    }
    return 0;
}
