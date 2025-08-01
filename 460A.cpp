#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	cin >> a >> b;
	int i=1,c=0;
	while(a>0){
		c++;
		a--;
		if(i%b==0){
			a++;
		}
		i++;
	}
	cout << c << endl;
}
	
