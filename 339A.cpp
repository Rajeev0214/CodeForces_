#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<int> num;
    if(s.length() == 1) cout << s;
    else{
    for(int i=0; i<s.length(); i++){
        if(s[i] != '+'){
            num.push_back(s[i] - '0');
        } 
    }
    sort(num.begin(), num.end());
    cout << num[0] << '+';
    for(int i=1; i<=num.size()-2; i++){
        cout << num[i] << '+';
    }
    cout << num[num.size()-1];
}
    return 0;
}