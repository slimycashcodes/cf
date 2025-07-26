#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n,m;
	cin >> n >> m;
	vector <int> v(n);
	int sum = 0;
	int c = 0;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		if(x<0){
			v[c] = 0-x;
			c++;
		}
	
	}
	sort(v.begin(),v.end(),greater<int>());
	cout << accumulate(v.begin(),v.begin()+m,0) << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
}
