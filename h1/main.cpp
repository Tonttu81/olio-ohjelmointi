#include <iostream>

using namespace std;

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "Summa on: " << sum << endl;
}

void calcDiv(int jaettava, int jakaja) {
    if (jakaja == 0) {
        cout << "Jakaja ei saa olla nolla." << endl;
    } else {
        float osamaara = (float)jaettava / (float)jakaja;
        cout << "Osamaara on: " << osamaara << endl;
    }
}

int retSum(int a, int b) {
    int sum = a + b;
    return(sum);
}

float retDiv(int jaettava, int jakaja) {
    if (jakaja == 0) {
        throw runtime_error("Jakaja ei saa olla nolla.");
    } else {
        float osamaara = (float)jaettava / (float)jakaja;
        return(osamaara);
    }
}

int main()
{
    int a;
    cout << "Anna ensimmainen luku: ";
    cin >> a;

    int b;
    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sum = retSum(a, b);
    cout << a << " + " << b << " = " << sum << endl;

    try {
        float div = retDiv(a, b);
        cout << a << " / " << b << " = " << div << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
