#include<bits/stdc++.h>
using namespace std;
    int test, n;

int main() {
    cin >> test;
    while(test--){
        cin >> n;
        set<int> st;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << (int)st.size() << "\n";
    }
    return 0;
}