#include <stdio.h>
int main () {
    int num, h, min, sec;
    scanf("%d", &num);
    h = num/3600;
    num %= 3600;
    min = num/60;
    num %= 60;
    sec = num;
    printf("%d:%d:%d\n", h, min, sec);
    return 0;
} 
