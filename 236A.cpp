#include<bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    set<char> st;
    int count = 0;
    for(int i=0; i<n.size(); i++){
        st.insert(n[i]);
    }
    for(auto it : st){
        count++;
    }
    if(count%2==0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}