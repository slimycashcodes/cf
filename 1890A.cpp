#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int t;
	cin >> t;

	vector <int> v(t);
	unordered_map <int,int> um;
	for(int i=0;i<t;i++){
		cin >> v[i];
		um[v[i]]++;
	}
	if(t==2 || size(um)==1){
		cout << "Yes" << endl;
		return ;
	}
	if(size(um)>3){
		cout << "No" << endl;
		return;
	}
	bool found = false;
	if(size(um)==2){
		for(auto& pair:um){
			if(pair.second==t/2){
				found = true;
				break;
			}
		}
		if(found==true){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
		return;
	}
	cout << "No" << endl;
	return;
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
