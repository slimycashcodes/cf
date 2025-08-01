#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,r,b;
    cin >> n >> r >>b;
    int pc = (r)/(b+1);
    int q = r%(b+1);
    r-=q;
    while((r>0)||(b>0)){
        for(int i=0;i<pc;i++){
            if(r>0){cout<<"R";r--;};
        }
        if(q>0){cout << "R";q--;}
        if(b>0){cout<<"B";
        b--;}
    }
    cout << endl;
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}
	
