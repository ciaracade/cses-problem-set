#include <bits/stdc++.h>
using namespace std;

#define fo(i, k, n) for (int i = k; i < n; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin >> input;

    char prev = '\n';
    int maxRep = 1, currRep = 1;

    fo(i, 0, input.size()) {
        if (prev != input[i]) {
            currRep = 1;
            prev = input[i];
        } else {
            currRep += 1;
            maxRep = max(maxRep, currRep);
        }
    }

    cout << maxRep;
    return 0;
}