//g++  7.4.0

#include <iostream>
using namespace std;

bool isp(int n){
    if(n<2){return false;}
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cin >> a >> b;
    if(isp(a)){
        while(true){
            a++;
            if(isp(a) && a!=b){
                cout << "NO" << endl;
                return 0;
            }
            if(a>b){
                cout << "NO" << endl;
                return 0;
            }
            if(isp(a) && a==b){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    return 0;
}
