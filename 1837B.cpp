#include <bits/stdc++.h>
using namespace std;

//3 3 6 2

void solve(){
  int l,q=0;
  cin >> l;
  string s;
  cin >> s;
  int c = 1,m = 0;
  char p = s[0];
  for(int i=1;i<s.size();i++){
    //cout << p << s[i] << c << endl;
    if(s[i]==p){c++;}
    else{m=max(m,c);c=1;p=s[i];}
  }
  
  cout << max(m,c)+1 << endl;
}

int main()
{
  int n;
  cin >> n;
  while(n--){
    solve();
  }
}
