#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    vector <int> v;
    for(int i=0; i<n ; i++){
        int e;
        cin >> e;
        v.push_back(e);
    }

    int max = *max_element(v.begin(),v.end());
    int s = 0;
    for(auto i: v){
        s += max - i;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << solve(n) << endl;
}
