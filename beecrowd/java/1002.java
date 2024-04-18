import java.io.IOException;
import java.util.Scanner;
    public class Main {
        public static void main(String[] args) {
            double  area, raio, pi = 3.14159;
            Scanner scan = new Scanner (System.in);
            raio = scan.nextDouble();
            area = pi * (raio * raio);
            System.out.printf("A=%.4f%n", area);
            scan.close();
        }
    }
