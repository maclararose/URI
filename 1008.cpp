#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numero, horas;
    float valor;

    cin >> numero;
    cin >> horas;
    cin >> valor;

    cout << "NUMBER = " << numero << endl;
    cout << fixed << setprecision (2);
    cout << "SALARY = U$ " << valor*horas << endl;


    return 0;
}
