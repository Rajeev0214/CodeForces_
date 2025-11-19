#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        s.insert(arr[i]);
    }
    vector<int>a2;
    for(auto it:s){
        a2.push_back(it);
    }
    sort(a2.begin(), a2.end());
    if(a2.size()==1) cout << "NO" << endl;
    if(a2[1] <= 100) cout << a2[1];
    return 0;
}