#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int found, lostSum;
        cin >> found >> lostSum;
        vector<int> foundElement;
        int sumFull[50]={0};
        int sum=0;
        for(int i=0; i<found; i++){
            cin >> foundElement[i];
            sum=sum+foundElement[i];
        }
        sort(foundElement.begin(), foundElement.end());
        if(found==foundElement[0]) {
            cout << "NO" << endl;
            break;
        }

        int sum2=0;
        for(int i=1; i<50; i++){
            sumFull[i] = sum2+i;
        }

        int target;
        for(int i=0; i<50; i++){
            if(sum < sumFull[i]){
                target=sumFull[i];
                break;
            }
        }

        int needToFind = target-sum;

        for(int i=0; i<foundElement.size(); i++){
            if(foundElement[i] == target) cout << "No" << endl;
            else cout << "Yes" << endl;
        }


    }
    return 0;
}