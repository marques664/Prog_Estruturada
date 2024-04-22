import java.io.IOException;
import java.util.Scanner;
    public class Main {
        public static void main(String[] args) {
            Scanner scan = new Scanner (System.in);
            double salario = scan.nextDouble();
            double novoSalario;
            double reajuste;
            int percentualReajuste;
            if(salario <= 400.00){
                percentualReajuste = 15;
            } else if(salario <= 800.00){
                percentualReajuste = 12;
            } else if(salario <=1200.00){
                percentualReajuste = 10;
            } else if(salario <= 2000.00){
                percentualReajuste = 7;
            } else{
                percentualReajuste = 4;
            }
            reajuste = salario * (percentualReajuste / 100.0);
            novoSalario = salario + reajuste;
            System.out.printf("Novo salario: %.2f%n", novoSalario);
            System.out.printf("Reajuste ganho: %.2f%n", reajuste);
            System.out.printf("Em percentual: %d %%%n", percentualReajuste);
            scan.close();
        }
    }
