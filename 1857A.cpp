#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int t;
	cin >> t;
	vector <int> v(t);
	for(int i=0;i<t;i++){
		cin >> v[i];
	}
	if(accumulate(v.begin(),v.end(),0)%2==0){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
	return;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}
