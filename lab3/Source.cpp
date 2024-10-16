#include <iostream>

using namespace std;

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int arrangements(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    int n = 8;
    int r = 8;

    cout << "Кiлькiсть розмiщень " << n << " елементiв по " << r << ": ";
    cout << arrangements(n, r) << endl;

    return 0;
}
