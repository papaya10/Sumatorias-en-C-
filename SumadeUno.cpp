//Sandra Mamani Condemayta 11/04/2024, este código calcula la suma de uno en uno hasta un número(n) ingresado por el usuario que actua como límite.
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;                     //decl. variables
    cout << "ingrese un número: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {    //bucle que va desde i = 1 hasta i <= n, aumentando i en uno en cada iteración.
        sum += 1;                     // acumulador que en cada iteración, se agrega el valor de 1 a la variable (sum).
        cout << 1 << " + ";
    }
    cout<< " = " << sum << endl;
    return 0;
}
