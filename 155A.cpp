#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count=0;
    int maxi=a[0];
    int mini=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>maxi){
            maxi=a[i];
            count++;
        }
        else if(a[i]<mini){
            mini=a[i];
            count++;
        }
    }
    cout << count;
    return 0;
}