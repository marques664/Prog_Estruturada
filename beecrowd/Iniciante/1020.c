#include <stdio.h>
int main () {
    int num, ano, mes, dias;
    scanf("%d", &num);
    ano = num/365;
    num %= 365;
    mes = num/30;
    num %= 30;
    dias = num;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);
    return 0;
} 
