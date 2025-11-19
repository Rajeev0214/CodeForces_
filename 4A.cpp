#include<bits/stdc++.h>
using namespace std;

int main() {
    int x; 
    cin >> x;
        if(x >= 1 && x <= 100 && x%2 == 0 && x != 2) 
            cout << "YES";
        else 
            cout << "NO";
        return 0;
}