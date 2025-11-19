#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll x; cin >> x;
        ll j = 1;
        int flag = 0;
        if(n>1){
        for(ll i=0; i<n && flag == 0; i++){
            ll mini = min(a[i], a[j]);
            ll maxi = max(a[i], a[j]);
            if(mini <= x && maxi >= x){
                flag++;
                break;
            }
        }
        if(flag == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
        }
        else if(a[0] == x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}