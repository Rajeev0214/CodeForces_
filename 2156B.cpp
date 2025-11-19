#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, q; cin >> m >> q;
        int a[q];
        string s; cin >> s;
        for(int i=0; i<q; i++){
            cin >> a[i];
        }

        for(int i=0; i<q; i++){
            int maxi=0;
            int count=0;
            for(int j=0; j<m && a[i]!=0; j++){
                if(s[j] == 'A'){
                    a[i] -= 1;
                    count++;
                }
                if(s[j] == 'B'){
                    a[i] /= 2;
                    count++;
                }
                if(j==m-1 && a[i] != 0) j=-1;
                if(a[i]==0){
                    break;
                }
            }
            // maxi =max(maxi, count);
            cout << count << endl;
        }
    }
    return 0;
}