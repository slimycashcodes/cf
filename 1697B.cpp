#include <bits/stdc++.h>
using namespace std;


int main(){
	long long n,q;
	cin >> n >> q;
	
	vector <long long> v(n) ;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	vector <long long> pre(n+1,0);
	for(int i=0;i<n;i++){
		pre[i+1] = pre[i] + v[i];
	}
	while(q--){
		int x,y;
		cin >> x >> y;
		cout << pre[x] - pre[x-y] << endl;
	}
	return 0;
}
