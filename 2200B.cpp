#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    while(n--){
        int c = 0;
        int s;
        cin >> s;
        vector <int> arr(s);
        for(int i=0;i<s;i++){
            cin >> arr[i];
        }
        bool bo = true;
    
        for(int i=0;i<s-1;i++){
            if(arr[i]>arr[i+1]){
                bo = false;
                break;
            }
        }
        cout <<(  bo ? s : 1) << endl;
    }
    
}
