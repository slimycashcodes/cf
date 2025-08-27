#include <bits/stdc++.h>
using namespace std;


int main(){
    int c =0;
    int n;
    cin >> n;
    vector <int> b(n);
    for(int i=0;i<n;i++){cin >> b[i];}
    int l;
    cin >> l;
    vector <int> g(l);
    for(int j=0;j<l;j++){cin >> g[j];}
    sort(g.begin(),g.end());
    sort(b.begin(),b.end());
    for(int q=0;q<n;q++){
        for(int w=0;w<l;w++){
            if(abs(b[q]-g[w])<=1){
                g[w] = 1000;
                c++;
                break;
            }
        }
    }
    cout << c << endl;
}
