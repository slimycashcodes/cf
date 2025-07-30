#include <bits/stdc++.h>
using namespace std;



int main(){
    int n,sum=0;
    for(int i=0;i<5;i++){
        cin >> n;
        sum+=n;
    }
    if(sum%5==0 && sum!=0) cout << sum/5 << endl;
    else cout << -1 << endl;

}
