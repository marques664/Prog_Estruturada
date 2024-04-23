package variaveis;
import java.util.Scanner;
    public class beecrowd {
        public static void main(String[] args) {
            Scanner scan = new Scanner (System.in);
            String tipo1 = scan.next();
            String tipo2 = scan.next();
            String tipo3 = scan.next();
            if(tipo1.equals("vertebrado")){
                if(tipo2.equals("ave")){
                    if(tipo3.equals("carnivoro")){
                        System.out.println("aguia");
                    } else if(tipo3.equals("onivoro")){
                        System.out.println("pomba");
                    }
                }
                if(tipo2.equals("mamifero")){
                    if(tipo3.equals("onivoro")){
                        System.out.println("homem");
                    } else if(tipo3.equals("herbivoro")){
                        System.out.println("vaca");
                    }
                }
            }
            if(tipo1.equals("invertebrado")){
                if(tipo2.equals("inseto")){
                    if(tipo3.equals("hematofago")){
                        System.out.println("pulga");
                    } else if(tipo3.equals("herbivoro")){
                        System.out.println("lagarta");
                    }
                }
                if(tipo2.equals("anelideo")){
                    if(tipo3.equals("onivoro")){
                        System.out.println("minhoca");
                    } else if(tipo3.equals("hematofago")){
                        System.out.println("sanguessuga");
                    }
                }
            }
            scan.close();
        }
    }
