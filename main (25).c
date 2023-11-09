
/************** Escreva um função de complexidade O(lg n) que receba parâmetros inteiros k e n e retorne o valor de
k elevado a n ***/

#include <stdio.h>

long int k_elevado_n (int k, int n) {
    if (n == 0) {
        return 1;
    }

    int r = k_elevado_n(k, n / 2);
    if (n % 2 == 0) {
        return r * r;
    } else {
        return r * r * k;
    }
}


int main(){
    
    int a, b;
    
    printf("Número: ");
    scanf("%d", &a);
    printf("Elevado: ");
    scanf("%d", &b);
    printf("Resultado: ");
    printf("%ld", k_elevado_n(a, b));

    return 0;
}


