#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define N_POS 10

double degrees_to_radians(int degrees) {
    // TODO implemente seu código aqui
    return -1;
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
    int degrees[N_POS] = {0, 30, 45, 90, 180, 270, 360, 450, 630, 1080};
    double radians[N_POS] = {0, 0.5236, 0.7854, 1.571, 3.142, 4.712, 6.283, 7.854, 11, 18.85};

    bool failure = false;

    for(int i = 0; i < N_POS; i++) {
        if(fabs(degrees_to_radians(degrees[i]) - radians[i]) < 0.01) {
            printf("  Correto: ");
        } else {
            printf("Incorreto: ");
            failure = true;
        }
        printf(" %4d graus sao %#2.4f radianos\n", degrees[i], radians[i]);
    }

    return (int)failure;
}