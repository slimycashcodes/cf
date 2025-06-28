#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    unordered_map <int,vector<int>> hm ;
    hm[1] = vector<int>();
    hm[2] = vector<int>();
    hm[3] = vector<int>();
    for(int i=1 ; i<=n ; i++){
        int x;
        cin >> x;
        hm[x].push_back(i);
    }
    int c = min({size(hm[1]),size(hm[3]),size(hm[2])});
    cout << c << endl;
    for(int i=0 ; i < c ; i++){
        cout << hm[1][i] << " " << hm[2][i] << " " << hm[3][i] << endl ; 
    }
    return ;
}


int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}
