#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long m; cin >> m;
        long long count=0;
        for(long long i=m; i>=3; i=i-2){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}