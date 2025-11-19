#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    int k = 0;
    for(int i=0; i<n; i=i+k){
        cout << s[i];
        k++;
    }
    return 0;
}