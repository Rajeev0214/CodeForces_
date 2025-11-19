#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x<=9){
            cout << x << endl;
            continue;
        }
        int smallest = x%10;
        while(x){
            int temp=x%10;
            if(temp < smallest) smallest = temp;
            x = x/10;
        }
        cout << smallest << endl;
    }
    return 0;
}