#include<bits/stdc++.h>
using namespace std;

int main(){
    int g, c, l;
    cin >> g >> c >> l;
    int a[3] = {g, c, l};
    sort(a, a+3);
    int maxi = max(max(g,c), l);
    int mini = min(min(g, c), l);
    if(maxi - mini >= 10) cout << "check again";
    else cout << "final " << a[1];
    return 0;
}