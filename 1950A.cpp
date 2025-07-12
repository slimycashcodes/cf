#include <bits/stdc++.h>
using namespace std;

void solve(){
	
	int a,b,c;
	cin >> a >> b >> c;
	if(b>a && b>c){
		cout << "PEAK" << endl;
		return;
	}
	if(a<b && b<c){
		cout << "STAIR" << endl; 
		return;
	}
	cout << "NONE" << endl;
	return;
}

int main() {
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}
