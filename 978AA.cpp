#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<int> st;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
        if (st.find(arr[i]) == st.end()) {
            st.insert(arr[i]);
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
