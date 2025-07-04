#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0;
    cin >> n;
    string ans="";
    unordered_map <string,int> hm;
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        if(hm.find(s)!=hm.end()){
            hm[s]++;
        }
        else{
            hm[s] = 1;
        }
        if(hm[s]>m){
            m = hm[s];
            ans = s;
        }
    }
    cout << ans << endl;
    return 0;
}
