#include <iostream>
using namespace std;

int main() {
    const int MAX_PAIRS = 100;
    int inputPairs[MAX_PAIRS][2];
    int numPairs = 0;

    while (numPairs < MAX_PAIRS) {
        int M, N;
        cin >> M >> N;
        if (M <= 0 || N <= 0)
            break;
        inputPairs[numPairs][0] = M;
        inputPairs[numPairs][1] = N;
        numPairs++;
    }

    for (int i = 0; i < numPairs; i++) {
        int M = inputPairs[i][0];
        int N = inputPairs[i][1];

        int start = min(M, N);
        int end = max(M, N);

        int sum = 0;
        for (int j = start; j <= end; j++) {
            cout << j;
            sum += j;
            if (j < end)
                cout << " ";
        }
        cout << " Sum=" << sum << endl;
    }

    return 0;
}
