#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define N_POS 8

#define PI_VALUE 3.14159265

void preenche_cosseno(double *vec, int length) {
    // TODO implemente seu código aqui
}

/**
 * Use esta função para testar seu código.
 *
 * Você não precisa entender o que está acontecendo aqui; apenas rode a função e veja se seu código está certo!
 *
 * NÃO A MODIFIQUE! Isso pode causar problemas no testador automático.
 */
int main() {
    double radianos[N_POS] = {0, PI_VALUE/4, PI_VALUE/2, 3.f/4.f * PI_VALUE, PI_VALUE, 5.f/4.f * PI_VALUE, 7.f/4.f * PI_VALUE, 2*PI_VALUE};
    double cossenos[N_POS] = {1, 0.707107, 0, -0.707107, -1, -0.707107, 0.707107, 1};

    double vec[N_POS] = {-1, -1, -1, -1, -1, -1, -1, -1};

    preenche_cosseno(&vec[0], N_POS);

    bool failure = false;

    for(int i = 0; i < N_POS; i++) {
        if(fabs(vec[i] - cossenos[i]) < 0.01) {
            printf("  Correto: ");
        } else {
            printf("Incorreto: ");
            failure = true;
        }
        printf("cosseno(%+f) = %+f (sua resposta foi %+f)\n", radianos[i], cossenos[i], vec[i]);
    }

    return (int)failure;
}