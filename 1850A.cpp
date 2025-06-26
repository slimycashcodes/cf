#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector <int> v;
    for(int i=0 ; i<3 ;i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end(),greater<int>());
    if(v[1]+v[0]>=10){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
