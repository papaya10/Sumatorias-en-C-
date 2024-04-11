//Presentado por: Sandra Mamani Condemayta 11/04/2024, Este código calcula los factoriales de todos los números desde 0 hasta el número ingresado.
#include <iostream>
using namespace std;

int factorial(int n) {                  //toma a n para hallar su factorial
    int result = 1;                     // almacenado del factorial hallado
    for (int i = 0; i <= n; ++i) {       //bucle que itera desde 0 hasta n
        result *= (i == 0 ? 1 : i);
        cout << i << "! = ";
        for (int j = 1; j <= i; ++j) {
            cout << j << (j == i ? "" : " * ");
        }
        cout << " = " << result << endl;
    }
    return result;
}
int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    cout << "Factoriales hasta " << n << ":" << endl;
    factorial(n);
    return 0;
}
