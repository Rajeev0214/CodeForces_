#include<bits/stdc++.h>
using namespace std;

int main(){
    map <string, int> plgn;
    plgn ["Tetrahedron"] = 4;
    plgn ["Cube"] = 6;
    plgn ["Octahedron"] = 8;
    plgn ["Dodecahedron"] = 12;
    plgn ["Icosahedron"] = 20;

    int count = 0;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        count += plgn[s];
    }
    cout << count;
    return 0;
}