#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    int ans = ceil((float)n/a) * ceil((float)m/a);
    cout << ans << endl;
    return 0;
}