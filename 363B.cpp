#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,s,mi=0,sum=0;
	cin >> t >> s;
	vector<int> v(t);
	vector <int> sv(t+1);
	for(int i=0;i<t;i++){
		cin >> v[i];
		sum += v[i];
		sv[i+1] = sum;
	}
	
	
	int m = *(sv.end()-1);
	for(int i=0;i<=t-s;i++){
		if(m>sv[i+s]-sv[i]){
			m = sv[i+s]-sv[i];
			mi = i;
		}
	}
	cout << mi+1 << endl;
	return 0;
}
