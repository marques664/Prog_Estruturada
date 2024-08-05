#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int n1;
        scanf("%d", &n1);
        if(n1 == 0 || n1 == 1){
            printf("%d nao eh primo\n", n1);
        } else {
            int ehPrimo = 1;
            for(int j = 2; j * j <= n1; j++){
                if(n1 % j == 0){
                    ehPrimo = 0;
                    break;
                }
            }
            if(ehPrimo){
                printf("%d eh primo\n", n1);
            } else {
                printf("%d nao eh primo\n", n1);
            }
        }
    }

    return 0;
}
