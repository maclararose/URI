#include <iostream>
#include <ostream>
#include <iomanip>
using namespace std;

int main(){
    float A,B,C,media;

    cin >> A;
    cin >> B;
    cin >> C;

    media = ((A*2)+(B*3)+(C*5))/10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;

    return 0;
}
