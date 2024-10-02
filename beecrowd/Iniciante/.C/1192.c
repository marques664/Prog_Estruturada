#include <stdio.h>
int main(){
    int num, n1, n2, res;
    char c;
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        scanf("%d", &n1);
        scanf("%c", &c);
        scanf("%d", &n2);

        if(n1 == n2){
            res = n1 * n2;
            printf("%d\n", res);
        } else if (c >= 'A' && c <= 'Z'){
            res = n2 - n1;
            printf("%d\n", res);
        } else {
            res = n1 + n2;
            printf("%d\n", res);
        }


    }
    

    return 0;
}
