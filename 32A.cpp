#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n >> d;
    int a[n];
    int count=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    } 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            
            int m=max(a[i], a[j]);
            int mi=min(a[i], a[j]);

            if (m-mi <= d) count=count+1;
        }
    }
    cout << count;
    return 0;
}