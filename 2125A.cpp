#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'F' && s[i+1] == 'F' && s[i+2] == 'T' || s[i] == 'N' && s[i+1] == 'T' && s[i+2] == 'T'){
                char temp = s[i];
                s[i] = s[i+2];
                s[i+2] = temp;
            }
        }
        cout << s << endl;
    }
    return 0;
}