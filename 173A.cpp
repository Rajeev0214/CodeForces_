#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    char arr[3];
    int n;
    cin >> n;
    while(n>=1 && n<=150){
        for(int i=0;i<3;i++){
            cin >> arr[i];
        }
        if(arr[0] == '+' || arr[2] == '+') count+=1;
        else if(arr[0] == '-' || arr[2] == '-') count-=1;
        n--;
    }
    cout << count;
}