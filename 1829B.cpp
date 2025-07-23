//g++  7.4.0

#include <iostream>
using namespace std;

void solve(){
    int l;
    cin >> l;
    int m = 0;
    int cl = 0;
    bool f = false;
    for(int i=0;i<l;i++){
        int x;
        cin >> x;
        if(x==0 && f == true){cl++;}
        if(x==0 && f == false){
            f = true;
            cl = 1; 
        }
        if(x==1 && f == true){
            m = max(m,cl);
            cl = 0;
            f = false;
        }
    }
    m = max(m,cl);
    cout << m << endl;
    
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}
