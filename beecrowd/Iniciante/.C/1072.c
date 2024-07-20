#include <stdio.h>

int main() {
    int N, X;
    int in = 0, out = 0;
    int i = 0;

    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &X);
        if (X >= 10 && X <= 20) {
            in++;
        } else {
            out++;
        }
        i++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
