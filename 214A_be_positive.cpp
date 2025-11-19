#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int length, operation;
    int cases;
    cin >> cases;
    while(cases >=1 && cases <= 10000){
        cin >> length;
        int arr[length];
        int countN = 0;
        int countZ = 0;
        for(int i=0; i<length; i++){
            cin >> arr[i];
            if(arr[i] == 0) countZ++;
            if(arr[i] == -1) countN++;
        }
        operation = countZ + 2*(countN%2);
        cout << operation << endl;
        cases--;
    }
    return 0;
}