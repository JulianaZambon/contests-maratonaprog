#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

int main() {
    int Q;
    scanf("%d", &Q);
    int N;
    int consul[231];
    int solut[231];
    int cont = 0;
    int controle = 0;

    for (int i = 0; i < Q; i++)
        scanf("%d", &consul[i]);

    for (int i = 0; i < Q; i++) {
        int M = 0;
        for (int A = 0; A <= sqrt(sqrt(consul[i])); A++) {        
            for (int B = A; B <= sqrt(sqrt(consul[i])); B++) {
                for (int C = B; C <= sqrt(sqrt(consul[i])); C++) {
                    for (int D = C; D <= sqrt(sqrt(consul[i])); D++) {
                        if (((A*A*A*A) + (B*B*B*B) + (C*C*C*C) + (D*D*D*D)) == consul[i]) {
                            solut[cont] = A;
                            solut[cont+1] = B;
                            solut[cont+2] = C;
                            solut[cont+3] = D;
                            M++;
                            cont += 4; 
                        }
                    }
                }
            }
        }

        printf("%d", M);

        if (M != 0) {
            int i = controle;

            for (int i = controle; i < (controle+(M*4)); i++) {

                if (i % 4 == 0) {
                    printf("\n%d", solut[i]);
                } else {
                    printf("% d", solut[i]);
                }
            }
            controle += 4;
        }
        printf("\n");
    }

    return 0;
}