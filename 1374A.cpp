#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int ans = floor(c/a);
	
	ans = ans*a + b;
	if(ans>c){
		ans -= a;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while(n--){
		cout << solve() << endl;
	}
	return 0;	
}
