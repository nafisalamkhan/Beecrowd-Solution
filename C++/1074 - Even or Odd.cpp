#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    int values[N];

    for (int i = 0; i < N; ++i) {
        cin >> values[i];
    }

    for (int i = 0; i < N; ++i) {
        int X = values[i];

        if (X == 0) {
            cout << "NULL" << endl;
        } else {
            string result;

            if (X % 2 == 0) {
                result += "EVEN ";
            } else {
                result += "ODD ";
            }

            if (X > 0) {
                result += "POSITIVE";
            } else {
                result += "NEGATIVE";
            }

            cout << result << endl;
        }
    }

    return 0;
}
