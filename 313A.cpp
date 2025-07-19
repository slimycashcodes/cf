#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int nc = n;
	if(n>=0){
		return n;
	}
	if(n<0 && n>-10){
		return 0;
	}
	int ld = n%10;
	int lld = (n%100)/10;
	n/=100;
	// cout << n << lld << ld;
	return max(((n*10)+ld),((n*10)+lld));
}

int main(){
	int s;
	cin >> s;
	cout << solve(s) << "\n";
	return 0;
}
