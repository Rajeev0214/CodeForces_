#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        if(a%2 != 0){
            cout << 0 << endl;
        }
        else{
            int x = a%4;
            a -= x;
            cout << a/4+1 << endl;
        }
    }
    return 0;
}