#include <stdio.h>
int main() {
    double num;
    scanf("%lf", &num);
    if(0 < num <= 25.0000){
        printf("Intervalo (0,25]\n");
    } else if(25 < num >= 50.0000) {
        printf("Intervalo (25,50]\n");
    } else if(50 < num >= 75.0000) {
        printf("Intervalo (50,75]\n");
    } else if (75 < num >= 100.0000) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    return 0;
}