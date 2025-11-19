#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll a, b, n; cin >> a >> b >> n;
        ll count = 0;
        while(a <= n && b <= n){
            if(a<b){
                a += b;
                count++;
            }
            else if(b <= a){
                b += a;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}