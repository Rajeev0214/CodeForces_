#include<bits/stdc++.h>
using namespace std;

int func(int x, int &count){
    if(x%10 == 0){
        if(x/10 <= 9) count++;
        else func(x/10);
    }
    else return count;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count=0;
        for(int i=1; i<=n; i++){
            if(i <= 10) count++;
            else return func(i, &count);
        }
        cout << count << endl;
    }
    return 0;
}