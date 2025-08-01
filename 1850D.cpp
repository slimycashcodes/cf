#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];    
    sort(a.begin(),a.end());
    int cnt = 1, ans = 1;
    for(int i = 0; i < n-1; i++) {
        if(a[i+1] - a[i] <= k) {
            cnt++;
        } else {
            cnt=1;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << '\n';
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
	
