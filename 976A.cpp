#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char arr[n];
    int c1=0, c0=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == '1') c1++;
        else c0++;
    }
    if(c1!=0) cout << '1';
    for(int i=0; i<c0; i++){
        cout << '0';
    }
    return 0;
}