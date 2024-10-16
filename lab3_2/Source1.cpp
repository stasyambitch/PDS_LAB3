#include <iostream>
#include <iomanip>

using namespace std;

void stirlingNumbers(int n, int F[20][20]) {
    for (int i = 1; i <= n; ++i) {
        F[i][1] = 1;
        F[i][i] = 1;
    }

    for (int i = 3; i <= n; ++i) {
        for (int j = 2; j < i; ++j) {
            F[i][j] = F[i - 1][j - 1] + j * F[i - 1][j];
        }
    }
}

void bellNumbers(int n, int F[20][20], int B[20]) {
    for (int i = 1; i <= n; ++i) {
        B[i] = 0;
        for (int j = 1; j <= i; ++j) {
            B[i] += F[i][j];
        }
    }
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    int variant;
    cout << "Ваш номер варiанту: ";
    cin >> variant;

    int n = variant + 5;

    int F[20][20] = { 0 };
    stirlingNumbers(n, F);

    int B[20] = { 0 };
    bellNumbers(n, F, B);

    cout << "Числа Стiрлiнга другого роду:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "| " << setw(3) << F[i][j] << " ";
        }
        cout << "|\n";
    }

    cout << "\nЧисла Белла:\n";
    for (int i = 1; i <= n; ++i) {
        cout << "B(" << i << ") = " << B[i] << endl;
    }

    return 0;
}
