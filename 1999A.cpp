  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      int n;
      cin >> n;
      while(n--){
          int s ;
          cin >> s;
          int an = 0;
          an += s%10;
          an += s/10;
          cout << an << endl;
      }
  }
