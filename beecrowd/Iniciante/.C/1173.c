#include <stdio.h>

int main(){
    int vet[10];
    scanf("%d", &vet[0]);
    printf("N[0] = %d\n", vet[0]);

    for(int i = 1; i < 10; i++){
        vet[i] = vet[i - 1] * 2;
        printf("N[%d] = %d\n", i, vet[i]);
    }


    return 0;
}
