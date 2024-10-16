#include <stdio.h>

int main(){
    float M[12][12], res = 0;
    char op;

    scanf(" %c", &op);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &M[i][j]);
        }
    }

    int num = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i){
                res += M[i][j];
                num++;
            }
        }
    }
    

    switch (op){
    case 'S': 
        printf("%.1f\n", res);
        break;
    
    case 'M':
        res = res / num;
        printf("%.1f\n", res);
        break;
    
    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
