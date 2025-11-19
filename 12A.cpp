#include<bits/stdc++.h>
using namespace std;

int main(){
    char first[3]; cin >> first[0] >>first[1] >> first[2];
    char second[3]; cin >> second[0] >> second[1] >> second[2];
    char third[3]; cin >> third[0] >> third[1] >> third[2];
        
    if(first[0] == third[2] && first[1] == third[1] && first[2] == third[0] && second[0] == second[2]) cout << "YES";
    else cout << "NO";
    return 0;
}