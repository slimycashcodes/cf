#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string s;
  cin >> s;
  int n,a,b,c=0;
  cin >> n;

//   cout << s.size() << size(s) << endl; 
  vector <int> v;
  v.push_back(0);
  for(int i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1]){
        c++;
    }
    v.push_back(c);
  }


//    for(auto i: v){cout << i << " ";}
//    cout << "\n";
  

  for(int i=0;i<n;i++){
    cin >> a >> b;
    cout << v[b-1] - v[a-1] << endl;
  }
  return 0;
  
}
