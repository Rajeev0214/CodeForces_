#include<bits/stdc++.h>
using namespace std;

int main(){
    short t;
    cin >> t;
    int ans=0;
    while(t--){
        string n;
        cin >> n;
        for(int i=0; i<n.size(); i++){
            if(n[i] == '1') ans += n.size()-1;
            else ans += 1; 
        }
        cout << ans << "\n";
    }
    return 0;
}