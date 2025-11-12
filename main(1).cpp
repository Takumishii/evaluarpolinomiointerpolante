#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 65.0;
    double beta[] = {
        4.3580e+00,
       -2.3832e-02,
        1.2801e-03,
       -3.5750e-05,
        5.4722e-07,
       -4.3333e-09,
        1.3889e-11
    };
    double P = 0.0;
    for (int i = 0; i < 7; i++) {
        P += beta[i] * pow(x, i);
    }

    cout << "el calor especifico aproximado a 65°C es: " << P << " kJ/kg°C" << endl;

    return 0;
}
