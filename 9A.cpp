#include<bits/stdc++.h>
using namespace std;

int main(){
    short y,z;
    cin >> y >> z;
    short maximum = max(y,z);
    if(maximum == 1) cout << "1/1";
    if(maximum == 2) cout << "5/6";
    if(maximum == 3) cout << "2/3";
    if(maximum == 4) cout << "1/2";
    if(maximum == 5) cout << "1/3";
    if(maximum == 6) cout << "1/6";
    if(maximum == 0) cout << "0/1";
    return 0;
}