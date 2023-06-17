#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    double x1, y1, x2, y2;
    scanf("%1f, %1f %1f %1f", &x1, &y1, &x2, &y2);
    cout << fixed << setprecision(4) << sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) <<"\n";
    return 0;
}