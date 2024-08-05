#include <stdio.h>

int main(){
    int N;
    double n1, n2, res;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%lf", &n1);
        scanf("%lf", &n2);
        if(n2 == 0){
            printf("divisao impossivel\n");
        } else {
            res = (double)n1 / n2;
            printf("%.1lf\n", res);
        }
    }

    return 0;
}
