#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,x;
    cin >> n;
    vector <int> v(n);
    int sum = 0;
    for(int i=0;i<n;i++){
      cin >> x;
      sum += x;
      v[i] = sum;
    }
    int k;
    cin >> k;
    for(int j=0;j<k;j++){
      int c = 0,nn;
      cin >> nn;
       int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] >= nn) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << left+1 << endl;
    }
    return 0;
}
