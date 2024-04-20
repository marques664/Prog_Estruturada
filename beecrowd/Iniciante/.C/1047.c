#include <stdio.h>
int main(){
    int tempoHoras, tempoMinutos, horaInicial, minutoInicial, horaFinal, minutoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    tempoHoras = horaFinal - horaInicial;
    tempoMinutos = minutoFinal - minutoInicial;
    if(tempoHoras == 0 && tempoMinutos == 0){
        tempoHoras = 24;
    } else {
        if(tempoMinutos < 0) {
        tempoMinutos += 60;
        tempoHoras -= 1;
    }
    if(tempoHoras < 0){
        tempoHoras += 24;
    }
    if (tempoHoras == 0 && tempoMinutos == 0)
            tempoMinutos = 1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempoHoras, tempoMinutos);
    return 0;
}
