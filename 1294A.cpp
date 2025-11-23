#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long a[3];
        for(int i=0; i<3; i++) cin >> a[i];
        int n; cin >> n;
        sort(a, a+3);
        n -= 2*a[2] - a[1] - a[0];
        if(n < 0 || n%3 != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;    
}