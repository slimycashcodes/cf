#include <bits/stdc++.h>
using namespace std;

void solve(){
	int l;
	cin >> l;
	string s;
	cin >> s;
	int o=0,c=0,a=0;
	for(auto i:s){
		if(i==')'){
			if(c+1>o){a++;}
			else{c++;}
		}
		else{o++;}

	}
	cout << a << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}
