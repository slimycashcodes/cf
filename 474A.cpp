#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ios_base::sync_with_stdio(false);
	string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin.tie(NULL);
	int it = 0;
	char i;
	cin >> i;
	if(i=='R'){it = -1;}
	else{it = 1;}
	string c,ans;
	cin >> c;
	for(int ch=0;ch<c.size();ch++){
		if((strcmp(&c[ch],"q")==0 || strcmp(&c[ch],"a")==0 || strcmp(&c[ch],"z")==0)&& i=='R'){
			ans+=c[ch];
			continue;
		}
		else if((strcmp(&c[ch],"p")==0 ||strcmp(&c[ch],";")==0||strcmp(&c[ch],"/")==0 )&&i=='L'){
			ans+=c[ch];
			continue;
		}
		else{
			int p = ss.find(c[ch]);
			ans+=ss[p+it];
		} 
	}
	cout << ans << endl;
}
	
