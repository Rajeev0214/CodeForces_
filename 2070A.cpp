#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    int count=0; 
    for(int i=0; i<15; i++){
        if(i%3 == i%5) count++;
    }

    while(t--){
        int x; cin >> x;
        long long cycles=x/15;
        int remainder=x%15;

        long long totalCount = count * cycles;

        for(int i=0; i<=remainder; i++){
            if(i%3 == i%5) totalCount++;
        }
        cout << totalCount << endl;
    }
    return 0;
}