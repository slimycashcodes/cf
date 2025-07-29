#include <bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
	int a,b;
	cin >> a >> b;
	unordered_map <int,int> map;
	for(int i=0;i<a;i++){
		int e;
		cin >> e;
		map[e]++;
	}
	if(map[b]==0){return "NO";}
	return "YES";

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
