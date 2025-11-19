#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    int s= x.size();

    for (int i = 0; i < s; i++) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;

        if (i == 0 && x[i] == '9') continue;

        if (inverted < digit)
            x[i] = '0' + inverted;
    }

    cout << x << endl;
    return 0;
}
