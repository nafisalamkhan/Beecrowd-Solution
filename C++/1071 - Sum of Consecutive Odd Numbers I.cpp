#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int start, end;
    if (X < Y) {
        start = X;
        end = Y;
    } else {
        start = Y;
        end = X;
    }

    int sum = 0;

    for (int i = start + 1; i < end; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
