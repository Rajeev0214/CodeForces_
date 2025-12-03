#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count = 0, temp=0;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    temp = a[k-1];
    for(int i=0; i<n; i++){
        if(a[i] != 0 && a[i] >= temp) count++;
    }
    cout << count;
    return 0;
}