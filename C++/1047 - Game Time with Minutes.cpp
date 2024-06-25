#include <iostream>

using namespace std;

int main() {
    int iHour, iMinute, fHour, fMinute, duration;
    cin >> iHour >> iMinute >> fHour >> fMinute;

    int initialTotalminute = iHour * 60 + iMinute;
    int finalTotalminute = fHour * 60 + fMinute;

     if (finalTotalminute == initialTotalminute) {
        duration = 24 * 60;
    } else if (finalTotalminute > initialTotalminute) {
        duration = finalTotalminute - initialTotalminute;
    } else {
        duration = (24 * 60 - initialTotalminute) + finalTotalminute;
    }

    int durationHour = duration / 60;
    int durationminute = duration % 60;

    cout << "O JOGO DUROU " << durationHour << " HORA(S) E " << durationminute << " MINUTO(S)" << endl;


    return 0;
}
