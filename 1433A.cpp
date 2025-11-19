#include<bits/stdc++.h>
using namespace std;

int solve(int n){

}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int length = s.length();
        int count = 0;
        int temp=1;
        while(length--){
            count += temp;
            temp++;
        }
        temp = s[0] - '0';
        count = count + (temp-1)*10;
        cout << count << endl;
    }
    return 0;
}