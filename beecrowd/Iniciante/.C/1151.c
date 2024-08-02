#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = 0;
    int b = 1;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            int temp = a + b;
            a = b;
            b = temp;
            printf(" %d", b);
        }
    }
    printf("\n");

    return 0;
}
