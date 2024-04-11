//Presentado por: Sandra Mamani C 11/04/2024, Este código nos da una secuencia de números de Fibonacci hasta el número ingresado.
#include <iostream>
using namespace std;
int fibonacci(int n) {                             //fibonacci hasta n
    if (n <= 1) {                                  //restricción
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);   //recursividad
}
int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    cout << "el resultado Fibonacci hasta " << n << " es: " << endl;
    int num1 = 0, num2 = 1;
    cout << num1 << " + " << num2 << " = " << num1 << endl; // Imprime el primer y segundo número de Fibonacci
    for (int i = 2; i <= n; i++) {                         // bucle que itera desde el tercer (=2) número de Fibonacci hasta n
        int nextNum = fibonacci(i);
        cout << num1 << " + " << num2 << " = " << nextNum << endl;
        num1 = num2;                                    //actualizamos los datos
        num2 = nextNum;
    }
    return 0;
}
