#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    if(a<b){cout << -1 << endl;return 0;}
    int c = (a+1)/2;
    c = (c+b-1)/b;
    cout << c*b << endl;
    return 0;
}
