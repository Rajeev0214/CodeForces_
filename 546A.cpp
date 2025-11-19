#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll k, n, w; cin >> k >> n >> w;
    ll sum = 0;
        for(ll i=1; i<=w; i++){
        sum = sum + (k*i);
        }
        ll extra = sum - n;
        if(extra < 0) cout << 0;
        else cout << extra;
    return 0;
}