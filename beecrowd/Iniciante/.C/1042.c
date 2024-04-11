#include <stdio.h>
int main() {
    int a, b, c, a1, b1, c1;
    scanf("%d %d %d", &a, &b, &c);
    a1 = a;
    b1 = b;
    c1 = c;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n\n", c);
    printf("%d\n%d\n%d\n", a1, b1, c1);
    return 0;
}
