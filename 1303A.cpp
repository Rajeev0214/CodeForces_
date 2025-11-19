#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int start=-1, end=-1, count=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                start = i; 
                break;
            }
        }
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == '1'){
                end = i; 
                break;
            }
        }

        if(start == -1 && end == -1){
            cout << 0 << endl;
        }
        else{
            for(int i = start; i<=end; i++){
                if(s[i] == '0') count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}