#include <iostream>

using namespace std;

int main() {
    int startTime, endTime, duration;
    cin >> startTime >> endTime;

    if (startTime == endTime){
        duration = 24;
    }
    else if (startTime < endTime){
        duration = endTime - startTime;
    }
    else{
        duration = (24 - startTime) + endTime;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;


    return 0;
}
