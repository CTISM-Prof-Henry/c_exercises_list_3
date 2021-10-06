#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define N_POS 9

#define M_PI 3.14159265

double degrees_to_radians(int degrees) {
    return (double)degrees * M_PI/180;
}

void preenche_seno(double *vec, int length) {
    int basis[N_POS] = {0, 45, 90, 135, 180, 225, 270, 315, 360};

    for(int i = 0; i < length; i++) {
        vec[i] = sin(degrees_to_radians(basis[i]));
    }
}

int main() {
    int graus[N_POS] = {0, 45, 90, 135, 180, 225, 270, 315, 360};
    double senos[N_POS] = {0, 0.707107, 1, 0.707107, 0, -0.707107, -1, -0.707107, 0};

    double vec[N_POS];

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