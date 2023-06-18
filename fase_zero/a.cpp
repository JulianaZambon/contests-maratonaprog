#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string partida;
    cin >> partida;
    if (partida == "XXO" || partida == "OXX" || partida == "XXO") {
        cout << "Alice\n";
    } else if (partida == "XOX") {
        cout << "*\n";
    } else
        cout << "?\n";

    return 0;
}
