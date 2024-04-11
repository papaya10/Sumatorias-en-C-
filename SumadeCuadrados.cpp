//Sandra Mamani Condemayta 11/04/2024 este código realiza la suma de cuadrados desde 1 hasta un número(n) límite ingresado por el usuario
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;                //declaramos nuestras variables 
    cout << "Inserte un número: ";
    cin >> n;
    for (int i = 1; i <= n; i++) { //bucle que inicia en i=1 hasta i<=n
        sum += i * i;             //calculamos el cuadrado, y se agrega a la variable sum
        cout << i * i << " + ";
    }
    cout << " = " << sum << endl;
    return 0;
}
