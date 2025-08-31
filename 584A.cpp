#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    if(t==10){
        if(n==1){
            cout << -1 << endl;
        }
        else{
            string re(n-1,'0'+1);
            re.push_back('0');
            cout << re << endl;
        }
    }
    else{
        string re(n,'0'+t);
        cout << re <<endl;
    }
    return 0;
}    