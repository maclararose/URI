#include <iostream>
#include <ostream>
#include <iomanip>
using namespace std;

int main(){
    float A, B;

    cin >> A;
    cin >> B;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << ((A*3.5)+(B*7.5))/11 << endl;

    return 0;
}
