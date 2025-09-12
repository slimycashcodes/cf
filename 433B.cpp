#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n,x,t=0,st=0;
    cin >> n;
    vector<ll> v(n+1),s(n+1);
    v[0] = s[0] = 0;
    for(int i=1;i<=n;i++){cin >>v[i] ; s[i] = v[i];}
    sort(s.begin(),s.end());
    for(int i=1;i<=n;i++){t += v[i] ; v[i] = t;st += s[i] ; s[i] = st;}
    // for(int i=0;i<=n;i++){cout << v[i] << " ";}
    // cout << "\n";
    // for(int i=0;i<=n;i++){cout << s[i] << " ";}
    // cout << "\n";
    
    int cc;
    cin >> cc;
    while(cc--){
        ll a ,b ,c;
        cin >> a >> b >> c;
        b = max(0LL, b-1);
        if(a==1){
            //cout << b << " " << c << " ";
            if(b==0){
                
                cout << v[c] << endl;    
            }
            else{
               
                cout << v[c] - v[b] << endl;
            }
        }   
        else{
            if(b==0){
                
                cout << s[c] << endl;    
            }
            else{
                
                cout << s[c] - s[b] << endl;
            }
        }
    }
}
