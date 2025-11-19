#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int d=7;
    int count=0;
    int a[d];
    for(int i=0; i<d; i++){
        cin >> a[i];
    }

    for(int i=0; i<7 && n > 0; i++){
        n -= a[i];
        if(i==6 && n > 0) i=-1;
        else if(n <= 0) count = i+1;
    }
    cout << count;
    return 0;
}