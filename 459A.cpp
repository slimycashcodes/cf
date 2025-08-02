#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,pc) for(int i=0;i<pc;i++)
#define print(...) ((void)([](auto&&... args){ ((cout << args << ' '), ...); }(__VA_ARGS__), cout << '\n'))


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
	int x1,y1,x2,y2,x3=0,x4=0,y3=0,y4=0;
    int s;
    cin >> x1 >> y1 >> x2 >> y2;
    //print(x1,y1,x2,y2);    
    if(x1==x2){
        y3 = y1;y4=y2;
        s = abs(y1-y2);
        x3 = x1+s;x4=x2+s;
        print(x3,y3,x4,y4);
        return 0;
    }
    else if(y1==y2){
        s = abs(x1-x2);
        x3=x1;x4=x2;
        y3=y1+s;y4=y2+s;
        print(x3,y3,x4,y4);
        return 0;
    }
    else{
        if(abs(x1-x2)!=abs(y1-y2)){cout<<-1<<endl;return 0;}
        y3 = y2;x3=x1;y4=y1;x4=x2;
        print(x3,y3,x4,y4);
        return 0;
    }
}
	
