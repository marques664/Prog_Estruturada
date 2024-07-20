#include <stdio.h>

int main (){
    
    int positivos = 0;
    double v1, v2, v3, v4, v5, v6;
    double soma;
    scanf("%lf", &v1);
    scanf("%lf", &v2);
    scanf("%lf", &v3);
    scanf("%lf", &v4);
    scanf("%lf", &v5);
    scanf("%lf", &v6);

    if(v1 > 0) {
        ++positivos;
        soma += v1;
    }
    if(v2 > 0) {
        ++positivos;
        soma += v2;
    }
    if(v3 > 0) {
        ++positivos;
        soma += v3;
    }
    if(v4 > 0) {
        ++positivos;
        soma += v4;
    }
    if(v5 > 0) {
        ++positivos;
        soma += v5;
    }
    if(v6 > 0) {
        ++positivos;
        soma += v6;
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", soma / positivos);
   return 0;
}
  
