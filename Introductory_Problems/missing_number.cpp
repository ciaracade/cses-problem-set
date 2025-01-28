#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define in int

int main() {
    ll n;
    cin >> n;

    ll s = 0;

    for (in i = 0; i < n + 1; i++) {
        in a = 0;
        cin >> a;

        s += a;
    }


    cout << n * (n + 1) / 2 - s;


    return 0;
