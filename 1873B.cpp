#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin >> a;
    vector <int> v(a);
    for(int i=0;i<a;i++){cin>>v[i];}
    sort(v.begin(),v.end());
    v[0]++;
    int p = 1;
    for(int i=0;i<a;i++){p*=v[i];}
    cout << p << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}
