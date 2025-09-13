#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n,c=0;
    cin >> n;
    vector <int> v(n),b(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){b[i] = 1;}
        else{b[i] = -1;c++;}
    }
    if(c == n){  
        cout << n-1 << endl;
        return 0;
    }

    int mc = b[0];
    int mg = b[0];
    for(int i=1;i<n;i++){
        mc  = max(b[i],mc+b[i]);
        mg = max(mg ,mc);
    }
    cout << mg+c  << endl;

}
