#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int even=0, odd=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] %2 == 0) even++;
            else if(a[i] % 2 == 1) odd++;
        }

        if(even == n || odd == n){
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }

        else{
            sort(a, a+n);
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}