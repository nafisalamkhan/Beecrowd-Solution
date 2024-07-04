#include <iostream>
using namespace std;

int main() {
    int X, Y;
    int inputs[100][2];
    int count = 0;

    while (true) {
        cin >> X >> Y;
        if (X == Y) {
            break;
        }

        inputs[count][0] = X;
        inputs[count][1] = Y;
        count++;
    }

    for (int i = 0; i < count; i++) {
        if (inputs[i][0] < inputs[i][1]) {
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
    }

    return 0;
}
