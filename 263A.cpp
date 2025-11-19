#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5];
    int x=0, y=0;
    int count = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                x=i; 
                y=j;
            }
        }
    }
    if(x>2) count += x-2;
    if(x<2) count += 2-x;
    if(y>2) count += y-2;
    if(y<2) count += 2-y;

    cout << count;
    return 0;
}