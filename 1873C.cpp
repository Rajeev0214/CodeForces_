#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, int * sum){
    if((i == 0 || j == 9) || (i == 9 || j == 0)) *sum+= 1;
    else if((i == 1 || j == 8) || (i == 8 || j == 1)) *sum+= 2;
    else if((i == 2 || j == 7) || (i == 7 || j == 2)) *sum+= 3;
    else if((i == 3 || j == 6) || (i == 6 || j == 3)) *sum+= 4;
    else if((i == 4 || j == 5) || (i == 5 || j == 4)) *sum+= 5;
    return *sum;
}
int main(){
    int t; cin >> t;
    while(t--){
        char a[10][10];
        int sum = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin >> a[i][j];
                if(a[i][j] == 'X') solve(i, j, &sum);
            }
        }
        cout << sum << endl;
    }
    return 0;
}