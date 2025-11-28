#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int count1=0, count2=0;
        set<int> st;
        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        sort(a, a+n);
        int temp = a[0];
        for(int i=0; i<n; i++){
            if(a[i] == temp) count1++;
            else count2++;
        }
        if(st.size() > 2) cout << "NO" << endl;
        else{
            if(a[0] == a[n-1]) cout << "YES" << endl;
            else if(count1 == n/2 || count2 == n/2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}