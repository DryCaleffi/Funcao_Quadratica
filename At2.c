
#include <stdio.h>
#include <math.h>
// Adryelle Caroline de Souza Calefi 
// Tabata Etiele Roberto da Silva 

// Coeficientes da equação
void coef(float a) {
    if (a > 0) {
        printf(" A concavidade dessa parabola é para Cima \n");
    } else if (a < 0) {
        printf(" A concavidade dessa parabola é para Baixo \n");
    }
}

// Zero da função
void zero(float a, float b, float c) {
    float zeroreal1, zeroreal2;
    float delta = ((b) *(b)) - (4 * a * c);

    if (delta >= 0) {
        zeroreal1 = (((-b) + sqrt(delta)) / (2 * a));
        zeroreal2 = (((-b) - sqrt(delta)) / (2 * a));

        printf("\n O Zero1 da Função é : %.1f , e o Zero2 é :  %.2f \n", zeroreal1, zeroreal2);
    } else {
        printf("\n Não existem zeros reais para essa função\n");
    }
}

void vertice(float a, float b, float c) {
    float x =( (-b) / (2 * a));
    float y = ((c - (b * b)) / (4 * a));

    printf("\n O valor do vértice é de x = %.1f, y = %.1f. \n", x, y);
}

int main() {
    float a, b, c;
    
    printf(" Informe o valor do coeficiente A da função : \n");
    scanf("%f", &a);
    printf(" Informe o valor do coeficiente B da função : \n");
    scanf("%f", &b);
    printf(" Informe o valor do coeficiente C da função : \n");
    scanf("%f", &c);

    coef(a);

    if (a != 0) {
        zero(a, b, c);
    }

    vertice(a, b, c);

    return 0;
}