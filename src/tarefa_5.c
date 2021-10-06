#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double calcula_altura(double altura_menino, double distancia, double angulo) {
    return altura_menino + (tan(angulo) * distancia);
}

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