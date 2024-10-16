#include <stdio.h>

int main(){
    float M[12][12], res = 0;
    int L = 0;
    char op;

    scanf("%d", &L);
    scanf(" %c", &op);

    if(L < 0 || L > 11){
        printf("Erro: Linha invalida!\n");
        return 1;
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(int i = 0; i < 12; i++){
        res += M[i][L];
    }

    switch (op){
    case 'S': 
        printf("%.1f\n", res);
        break;
    
    case 'M':
        res = res / 12;
        printf("%.1f\n", res);
        break;
    
    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
