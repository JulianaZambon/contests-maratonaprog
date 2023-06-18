#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll x;
    cin >> x;

    for (; x >= 10; x = (x / 10) * 3 + x % 10)
        cout << x << "\n";
    cout << x << "\n";

    return 0;
}