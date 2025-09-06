#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x,ee=0,a = INT_MAX;
    cin >> n >> k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2==0)ee++;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        if(v[i]%k==0){
            a = 0;
        }
        a = min(a,k-(v[i]%k));
    }
    if(k==4){
        if(ee>=2){cout << min(a,0LL) << endl;}
        else if(ee==1){cout << min(a,1LL) << endl;}
        else{cout << min(a,2LL) << endl;}
        return;
    }
    cout << a << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}
