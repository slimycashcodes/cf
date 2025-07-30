#include <bits/stdc++.h>
using namespace std;

int solve(){
    int t;
    vector <int> e,o;
    cin >> t;
    for(int i=0;i<t;i++){
        int x;
        cin >> x; 
        if(i%2!=x%2){
            if(x%2==0){e.push_back(x);}
            else{o.push_back(x);}
        }
    }
    if(e.size()!=o.size()){
        return -1;
    }
    return o.size();

}

int main(){
    int n;
    cin >> n;
    while(n--){
        cout << solve() << endl;
    }
}
