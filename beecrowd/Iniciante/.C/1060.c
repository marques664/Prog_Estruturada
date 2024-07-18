#include <stdio.h>

int main(){
    int positivos = 0;
    double v1, v2, v3, v4, v5, v6;
    scanf("%lf", &v1);
    scanf("%lf", &v2);
    scanf("%lf", &v3);
    scanf("%lf", &v4);
    scanf("%lf", &v5);
    scanf("%lf", &v6);

    if(v1 > 0){
        ++positivos;
    }
    if(v2 > 0){
        ++positivos;
    }
    if(v3 > 0){
        ++positivos;
    }
    if(v4 > 0){
        ++positivos;
    }
    if(v5 > 0){
        ++positivos;
    }
    if(v6 > 0){
        ++positivos;
    }
    printf("%d valores positivos\n", positivos);
    return 0;
}
