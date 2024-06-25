#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    if (B < C) swap(B, C);

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
