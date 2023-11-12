#include <stdio.h>
#include <locale.h>

double fatorial(int n);

int main () {
    setlocale(LC_ALL, "");
    int numero;

    printf("\nInsira o Numero: \n");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\n");

    if (numero < 0 || numero == 0) {
        printf("*******************************************************\n");
        printf("* Ops! O número inserido é Invalido tente de novo. :{ *\n");
        printf("*******************************************************\n");
    }else{
        printf("Resultado do calculo fatorial de %d = %.0lf\n", numero, fatorial(numero));
        printf("========================================\n");
    }
    return 0;
}

double fatorial(int n){
    if ( n <= 1 )
        return (1);
    else{
       return n * fatorial(n - 1);
    }
}