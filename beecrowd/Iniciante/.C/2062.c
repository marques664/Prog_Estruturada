#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char palavra[21];
    for (int i = 0; i < N; i++) {
        scanf("%20s", palavra);
        if (strlen(palavra) == 3 && palavra[0] == 'O' && palavra[1] == 'B' && palavra[2] != 'I') {
            palavra[2] = 'I';
        } else if (strlen(palavra) == 3 && palavra[0] == 'U' && palavra[1] == 'R' && palavra[2] != 'I') {
            palavra[2] = 'I';
        }

        printf("%s", palavra);
        if (i < N - 1) {
            printf(" "); 
        }
    }

    printf("\n");

    return 0;
}
