#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a1, a2; cin >> a1 >> a2;
        // char new1[n], new2[n];
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        
        if(a1 == a2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}