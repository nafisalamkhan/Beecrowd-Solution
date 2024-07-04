#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        double X, Y;
        cin >> X >> Y;

        if (Y != 0) {
            double result = X / Y;
            cout << fixed << setprecision(1) << result << endl;
        } else {
            cout << "divisao impossivel" << endl;
        }
    }

    return 0;
}
