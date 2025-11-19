#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=1; i<n-1; i++){
            int count=0;
            for(int j=1; j<n-1; j++){
                if(arr[j] == '.' && arr[j+1] != '#') count++;
            }
        }
    }
    return 0;   
}