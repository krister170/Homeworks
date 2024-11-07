#include <iostream>
using namespace std;

void calcSum(int a, int b) {
    cout << "Lukujen summa: " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaja ei voi olla nolla!" << endl;
    } else {
        cout << "Lukujen jakaminen: " << static_cast<double>(a) / b << endl;
    }
}

int main() {
    int a, b;

    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    return 0;
}
