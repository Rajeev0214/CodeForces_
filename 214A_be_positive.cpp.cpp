#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int neg=0, zero=0, length, operation=0;
    int cases;
    cin >> cases;
    cin >> length;
    int arr[length];
    while(cases >=1 && cases <= 10000){
        for(int i=0;i<length;i++){
            cin >> arr[i];
            if(arr[i] == -1) neg+=1;
            if(arr[i] == 0) zero+=1;
        }
        int remainder = neg%2;
        if(remainder==1) operation = remainder*2; 
        operation += zero;
        cases--;
    }
    return operation;
}