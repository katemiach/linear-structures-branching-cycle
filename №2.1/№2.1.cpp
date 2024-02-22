#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return sin(x) + 2 * log(x);
}

double f_1(double z) {
    return 2 * z + tan(z);
}

double f_2(double z) {
    return pow(log(z), 4) + 2 * z;
}

double f_3(double z) {
    return 2 * pow(sin(z), 2);
}

int main() {
    const double c = 1.3; 
    double z; 
    cout << "Enter the value of z: ";
    cin >> z;

    double x = cos(c * z); 

    double y; 

   
    if (z < 0) {
        y = f_1(z);
    }
    else if (z >= 0 && z <= 8) {
        y = f_2(z);
    }
    else {
        y = f_3(z);
    }

    x = f(x); 

  
    cout << "Value of the function y=f(x) for z=" << z << ": " << x << endl;

    return 0;
}