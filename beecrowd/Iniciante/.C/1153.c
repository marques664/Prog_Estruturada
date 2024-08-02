#include <stdio.h>

int main() {
    int n, res = 1;
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        res *= i;
    }
    printf("%d\n", res);
    return 0;
}
