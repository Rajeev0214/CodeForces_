#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int miniIndex;
    int maxiIndex;
    for(int i=0; i<n; i++){
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i] == maxi){
            miniIndex = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(a[i] == mini){
            maxiIndex = i;
            break;
        }
    }
    // cout << miniIndex << " " << maxiIndex << endl;
    if(miniIndex > maxiIndex) cout << miniIndex + (n - 1 - (maxiIndex + 1));
    else cout << miniIndex + (n-1-maxiIndex);
    return 0;
}