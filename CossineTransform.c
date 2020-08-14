#include <math.h>
#include <stdio.h>
#include <stdlib.h>




int main(void){

    int tam, i,j;
    scanf("%d", &tam); //tamanho da data

    const double p = 3.141592653589793; //constante de pi
    double var[tam], new[tam]; //var é o input, new o output apos a transformacao

    for(i = 0; i < tam; i++){
        scanf("%lf", &var[i]);
        new[i] = 0.0;
    }
    //no loop i equivale a n e j a k
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            new[i] +=  cos(p * (double)(i * (2 * j + 1)) / (double)(tam * 2)) * var[j]; //formula da transformaçao a parte dentro do cos eh o angulo
        }
        printf("%lf\n", new[i]);
    }   

    return 0;
}