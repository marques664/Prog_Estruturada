#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5;
    int par = 0, imp = 0, pos = 0, neg = 0;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if(n1 % 2 == 0){
        par++;
    } else {
        imp++;
    }

    if(n1 > 0){
        pos++;
    } else if(n1 < 0) {
        neg++;
    }

        if(n2 % 2 == 0){
            par++;
        } else {
            imp++;
        }

        if(n2 > 0){
            pos++;
        } else if(n2 < 0) {
            neg++;
        }


            if(n3 % 2 == 0){
                par++;
            } else {
                imp++;
            }

            if(n3 > 0){
                pos++;
            } else if(n3 < 0) {
                neg++;
            
            }

                if(n4 % 2 == 0){
                    par++;
                } else {
                    imp++;
                }

                if(n4 > 0){
                    pos++;
                } else if(n4 < 0) {
                    neg++;
                }


    if(n5 % 2 == 0){
        par++;
    } else {
        imp++;
    }

    if(n5 > 0){
        pos++;
    } else if(n1 < 0) {
        neg++;
    }
    

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
   
    
