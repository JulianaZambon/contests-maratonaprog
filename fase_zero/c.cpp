#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, k, multiplo, ultimo; 
    scanf ("%d %d", &n, &k);
    multiplo = (2 * n) + 1; /*precisa ser multiplo desse*/
    ultimo = 2 * n; /*ultimo num da sequencia*/

    /*alice² - k² deve ser multiplo de 2n - 1*/
    while (((((ultimo * ultimo) - (k)) / multiplo )) != 0) 
        ultimo--; /*se nao for decrementa */

    cout << (ultimo * ultimo);
    return 0;
}