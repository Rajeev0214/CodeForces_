#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < 0) a[i] *= -1;
        mini = min(mini, a[i]);
    }
    if(mini == 0) cout << 0;
    else if(mini < 0) cout << mini*-1;
    else cout << mini;
    return 0;
}