#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    if(x==1) cout << 0;
    else {
        int a[x][x];
        int rowSum[x]={0};
        int colSum[x]={0};
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                cin >> a[i][j];
                rowSum[i] = rowSum[i] + a[i][j];
            }
        }

    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            colSum[i] = colSum[i] + a[j][i];
        }
    }

   /*for(int i=0; i<x; i++){
        cout << rowSum[i] << " ";
   } cout << endl;
   for(int i=0; i<x; i++){
        cout << colSum[i] << " ";
   } cout << endl;*/

    sort(rowSum, rowSum+x);
    sort(colSum, colSum+x);

    int maxi=colSum[x-1];
    int mini=rowSum[0];
    int count=0, count2=0;
    if(maxi!=mini){
        for(auto it:rowSum){
        if(it < maxi && it !=0){
            count++;
        } 
    }

    for(auto it:colSum){
        if(it > mini && it !=0){
            count2++;
        } 
    }
    
        cout << count*count2;
    }
    else cout << 0;
    
}
    return 0;
}