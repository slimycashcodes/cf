#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,pc) for(int i=0;i<pc;i++)
#define print(...) ((void)([](auto&&... args){ ((cout << args << ' '), ...); }(__VA_ARGS__), cout << '\n'))

void solve(){
    int a,b,c=0;
    cin >> a >> b;
    string s;
    cin >> s;
    unordered_map <int,int> map;
    for(char i:s)map[i-'a']++;
    for(const auto& k:map){
        //cout << k.first << " " << k.second << endl;
        c+=k.second%2;
        //pp+=k.second/2;
    }
    //c--;
    if(c>b+1)cout<<"NO"<<endl;
    else cout << "YES" << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}
