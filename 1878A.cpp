#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        short check = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == k) check = 1;
        }
        if(check == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}