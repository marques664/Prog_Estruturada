package variaveis;
import java.util.Scanner;
    public class beecrowd {
        public static void main(String[] args) {
            int tempoHoras, tempoMinutos;
            Scanner scan = new Scanner (System.in);
            int horaInicial = scan.nextInt();
            int minutoInicial = scan.nextInt();
            int horaFinal = scan.nextInt();
            int minutoFinal = scan.nextInt();
            scan.close();
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
            System.out.println("O JOGO DUROU " + tempoHoras + " HORA(S) E " + tempoMinutos + " MINUTO(S)");
        }
    }
