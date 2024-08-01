#include <stdio.h>
#include <math.h>
int main(){
    int i, res, n;
    scanf("%d", &n);
    if(n % 2 == 0){
        n++;
    }
    for(i = 1; i <= n; i++){
        res = pow(i, 2);
        if(i % 2 == 0){
            printf("%d^2 = %d\n", i, res);
        }
    }
    return 0;
}
   
