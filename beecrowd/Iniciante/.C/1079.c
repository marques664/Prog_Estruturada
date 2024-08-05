#include <stdio.h>

int main(){
    int N;
    double n1, n2, n3, media;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%lf", &n1);
        scanf("%lf", &n2);
        scanf("%lf", &n3);
        media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}
