#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        string aa; cin >> aa;

        list<char>aaa;
        for(auto it : aa){
            aaa.push_back(it);
        }

        int b; cin >> b;
        string bb; cin >> bb;

        string inp; cin >> inp;

        for(int i=0; i<b; i++){
            if(inp[i] == 'V') aaa.push_front(bb[i]);
            if(inp[i] == 'D') aaa.push_back(bb[i]);
        }

        for(auto it : aaa) cout << it;
        cout << endl;
    }
    return 0;
}