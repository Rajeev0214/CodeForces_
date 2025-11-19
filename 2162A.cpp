#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        int largest=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i] > largest) largest= arr[i];
        }
        cout << largest << endl;
    }
    return 0;
}