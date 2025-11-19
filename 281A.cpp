#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int t = s[0];

    if(t >= 65 && t <= 90) cout << s;
    else{
        s[0] -= 32;
        cout << s;
    } 
    return 0;
}