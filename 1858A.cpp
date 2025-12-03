#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long a, b, c;
        cin >> a >> b >> c;
        if(c%2 == 0){
            if(a>b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
        else{
            a += 1;
            if(a>b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
    return 0;
}