#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int win = 0, draw = 0, lose = 0;

    for (int dice = 1; dice <= 6; dice++) {
        int diffA, diffB;

        if (a > dice) diffA = a - dice;
        else diffA = dice - a;

        if (b > dice) diffB = b - dice;
        else diffB = dice - b;

        if (diffA < diffB) win++;
        else if (diffA == diffB) draw++;
        else lose++;
    }
    cout << win << " " << draw << " " << lose;
    return 0;
}