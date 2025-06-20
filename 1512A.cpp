#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0 ;i<n ; i++){
        int s;
        cin >> s;
        vector <int> a(s);
        for(int &i : a){
            cin >> i;
        }
        vector <int> v = a;
        sort(a.begin(),a.end());
        for(int i=0 ; i<s ; i++){
            if(v[i]!=a[1]){
                cout << i+1 << endl;
                break;
            } 
        }
    }
    return 0;
}
