#include <stdio.h>
#include <math.h>
#include <stdbool.h>


double calcula_altura(double distancia, double angulo) {
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
    double angulo = 0.698132;
    double distancia = 8000;

    bool failure = false;

    double altura = calcula_altura(distancia, angulo);

    if(fabs(altura - 5142.302711) < 0.01) {
        printf(">>>>>Correto!<<<<<\n");
    } else {
        printf(">>>Incorreto!<<<\n");
        failure = true;
    }

    printf("altura correta: 5142.302711\n  sua resposta: %f\n", altura);

    return (int)failure;
}