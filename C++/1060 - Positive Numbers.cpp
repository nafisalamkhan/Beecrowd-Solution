#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    double n;
    int count = 0;

    for (int i = 0 ; i < 6; i ++){
        cin >> n;

        if(n >= 0){
            count++;
        }
    }
    cout << count << "valores positivos" << endl;

    return 0;
}
