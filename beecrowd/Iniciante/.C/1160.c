#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        int popA, popB, anos = 0;
        double cresA, cresB;
        scanf("%d %d", &popA, &popB);
        scanf("%lf %lf", &cresA, &cresB);
        while(1){
            popA += (int)(popA * (cresA / 100));
            popB += (int)(popB * (cresB / 100));
            anos++;
            if(popA > popB){
                if(anos > 100){
                    printf("Mais de 1 seculo.\n");
                } else {
                    printf("%d anos.\n", anos);
                }
                break;
            }
        }
    }
      

    return 0;
}
