#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    vector <int> v = {1,2,3,4,5,6};
    cin >> a >> b;
    a = max(a,b);
    int c = 0;
    for (auto i : v){
        if (i>=a) c++;
    }
    if(c==0){
        cout <<"0/1" << endl;
        return 0;
    }
    if(c==6){
        cout << "1/1" << endl;
        return 0;
    }
    b = gcd(c,6);
    c/=b;

    cout << c <<'/'<< 6/b << endl;
    return 0;
    
}
