#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double calcula_altura(double altura_menino, double distancia, double angulo) {
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
    double altura_menino = 1.30;
    double distancia = 500;
    double angulo = 0.349066;

    double calculado = calcula_altura(altura_menino, distancia, angulo);

    bool failure = false;

    if(fabs(calculado - 183.285202) < 0.01) {
        printf(">>>>>Correto!<<<<<\n");
    } else {
        printf(">>>Incorreto!<<<\n");
        failure = true;
    }
    printf("Resposta correta: 183.285202\n    Sua resposta: %f\n", calcula_altura(altura_menino, distancia, angulo));

    return (int)failure;
}