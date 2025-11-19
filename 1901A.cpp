#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int arr[n]={0};
        arr[0]=0;
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        if(n==1){
            cout << max(arr[1], 2*(x-arr[1])) << endl;
            continue;
        }
        else{
            int diff=0, maxi=0;
            for(int i=n; i>0; i--){
                diff=arr[i] - arr[i-1];
                maxi=max(maxi, diff);
            }
            maxi=max(maxi, 2*(x-arr[n]));
            cout << maxi << endl;
        }
    }
    return 0;
}