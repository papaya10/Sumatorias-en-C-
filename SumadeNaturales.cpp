// Presentado por: Sandra Mamani C 11/04/2024, este código calcula la suma de los números naturales desde 1 hasta un número ingresado por el usuario.
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;                 //declaramos variables
    cout << "Ingrese un número: ";
    cin >> n;
    for (int i = 1; i <= n; i++) { //bucle que va desde i = 1 hasta i <= n, aumentando i en uno en cada iteración.
        sum += i;
        cout << i << " + ";
    }
    cout << " = " << sum << endl;
    return 0;
}
