
#include <stdio.h>
#include <math.h>
int main(){
    int n, res;
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        res = i * n;
        printf("%d x %d = %d\n", i, n, res);
    }
    return 0;
}
   
    
