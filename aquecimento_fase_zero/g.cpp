#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int b, g, qntd, f;
    scanf("%d %d", &b, &g);
    qntd = g / 2;
    f = qntd - b;
    if (f > 0) 
        printf("Faltam %d bolinha(s)\n", &f);
    else if ((f <=  0) || (b > f))
        printf("Amelia tem todas bolinhas!\n");
    return 0;
}