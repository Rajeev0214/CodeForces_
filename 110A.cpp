#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int yes = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '4' || s[i] == '7') yes++;
    }

    if(yes == 4 || yes == 7) cout << "YES";
    else cout << "NO";
    return 0;
}