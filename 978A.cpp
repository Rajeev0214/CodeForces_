#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    set<int> st;
    for(int i=n-1; i>=0; i--){
        cin >> a[i];
    }
    vector<int>ans;

    for(int i=n-1; i>=0; i--){
        if(st.find(a[i]) == st.end()){
        st.insert(a[i]);
        ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}