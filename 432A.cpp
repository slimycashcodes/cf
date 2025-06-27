#include <bits/stdc++.h>
using namespace std;

void solve(){
    
}

int main(){
    int n,k;
    cin >> n >> k;
    int mit = 0;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        if(x+k<=5){
            mit++; 
        }
    }
    cout << mit/3 << endl;
}
