#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float n, avg, sum = 0;
    int count = 0;

    for (int i = 0 ; i < 6; i ++){
        cin >> n;

        if(n >= 0){
            count++;
            sum = sum + n;
        }
    }
    cout << count << " valores positivos" << endl;

    avg = sum / count;

    cout << fixed << setprecision(1) << avg << endl;

    return 0;
}
