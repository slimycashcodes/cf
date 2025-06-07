#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int nn;
        int c = 0;
        cin >> nn;
        list <int> arr;
        while(nn>0){
            if (nn%10!=0){
                arr.push_back((nn%10)*(pow(10,c)));
            }
            nn/=10;
            c++;
        }
        cout << arr.size() << "\n" ;
        for(auto i : arr){
            cout << i <<' ';
        }
        cout << '\n';
    }
    
}
