#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, m, q, a, b, sz;
    string dna;
    string prot;
    string ne;
    cin >> n >> m;
    cin >> dna >> prot;
    cin >> q;

    for (ll i = 0; i < q; i++) {
        cin >> a >> b;
        sz = b - a + 1;
        ll acertos = 0;
        for (ll j = 0; j < n - sz + 1; j++) {
            ll s = 0;
            for (ll k = 0; k < sz; k++) {
                if (prot[a - 1 + k] != dna[j + k])
                    break;
                s++;
            }
            if (s == sz)
                acertos++;
            else {
                if (dna[j + s] != prot[a - 1])
                    j += s;
            }
        }
        cout << acertos << "\n";
    }

    return 0;
}