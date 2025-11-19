#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 1, count = 0;
    if(n==1) count = 1;
    while(n != 0 && n >= sum && n != 1){
        count++;
        n -= sum;
        sum = sum + (count+1);
    }
    cout << count;
    return 0;
}