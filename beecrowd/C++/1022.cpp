#include <iostream>

using namespace std;

int main() {
    int N1, D1, N2, D2;
    int op;

    cin >> op;
    for(int i = 0; i < op; i++){
        char op1, operador, op2;
        cin >> N1 >> op1 >> D1 >> operador >> N2 >> op2 >> D2;

        int num, den;
        switch (operador) {
            case '+':
            num = (N1 * D2 + N2 * D1);
            den = (D1 * D2);
            break;
            case '-':
            num = (N1 * D2 - N2 * D1);
            den = (D1 * D2);
            break;
            case '*':
            num = (N1 * N2);
            den = (D1 * D2);
            break;
            case '/':
            num = (N1 * D2);
            den = (N2 * D1);
            break;
        }
        // Simplify the fraction
        int a = num, b = den, gcd;
        while (b != 0) {
            gcd = b;
            b = a % b;
            a = gcd;
        }
        // Ensure the denominator is positive
        if (den / gcd < 0) {
            gcd = -gcd;
        }
        // Output the result
        cout << num << "/" << den << " = " << (num / gcd) << "/" << (den / gcd) << endl;
    }
    
    return 0;
}
