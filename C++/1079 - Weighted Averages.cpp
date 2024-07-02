#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double avg[N];

    for (int i = 0; i < N; ++i) {
        double a, b, c;
        cin >> a >> b >> c;

        double average = ((a * 2) + (b * 3) + (c * 5)) / 10;
        avg[i] = average;
    }

    for (int i = 0; i < N; ++i) {
        cout << fixed << setprecision(1) << avg[i] << endl;
    }

    return 0;
}
