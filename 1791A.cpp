#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <char> v = {'c','o','d','e','f','r','s'};
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        char c;
        cin >> c;
        if ((count(v.begin(),v.end(),c))>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
