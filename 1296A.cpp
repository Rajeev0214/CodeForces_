#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int temp = n, sum=0;
        int cEven=0, cOdd=0;
        while(temp--){
            int i = n-temp;
            cin >> a[i];
            sum = sum + a[i];
            if(a[i] % 2 == 0) cEven++;
            else cOdd++;
        }
        if(sum%2 == 1) cout << "YES" << endl;
        else{
            if(cEven >= 1 && cOdd >= 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}