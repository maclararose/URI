#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double raio;

    cin >> raio;

    cout << fixed << setprecision(4);
    cout << "A=" << (raio*raio)*3.14159 << endl;

    return 0;
}
