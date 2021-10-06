#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define N_POS 9

void preenche_seno(double *vec, int length) {
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
    int graus[N_POS] = {0, 45, 90, 135, 180, 225, 270, 315, 360};
    double senos[N_POS] = {0, 0.707107, 1, 0.707107, 0, -0.707107, -1, -0.707107, 0};

    double vec[N_POS] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};

    preenche_seno(&vec[0], N_POS);

    bool failure = false;

    for(int i = 0; i < N_POS; i++) {
        if(fabs(vec[i] - senos[i]) < 0.01) {
            printf("  Correto: ");
        } else {
            printf("Incorreto: ");
            failure = true;
        }
        printf("seno(%3d) = %+f (sua resposta foi %+f)\n", graus[i], senos[i], vec[i]);
    }

    return (int)failure;
}