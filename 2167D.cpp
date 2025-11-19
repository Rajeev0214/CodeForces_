#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int s = INT_MAX;
        for(int i=0; i<n; i+=){
            cin >> a[i];
            if(a[i] < s) s=a[i];
        }
        for(long long i=2; i<=1000000000000000000ll; i++){
            int res = gcd(s, i);
            if(res == 1){
                cout << i << endl;
                break;
            } 
        }
    }
    return 0;
}