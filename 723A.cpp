#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a, b, c; cin >> a >> b >> c;
    int a[3];
    int count = 0;
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    sort(a, a+3);
    count = (a[1]-a[0]) + (a[2]-a[1]);
    cout << count;
    return 0;
}