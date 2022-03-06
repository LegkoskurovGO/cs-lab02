#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    
    if (a > b) {
        cout << "Maximum is " << a << '\n';
    }
    else {
        cout << "Maximum is " << b << '\n';
    }
    
    return 0;
}
