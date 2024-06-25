#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float salary, pay;
    cin >> salary;
    if (salary>=0.00 && salary <=2000.00) {
        cout<<"Isento" <<endl;
    }
    else if (salary>=2000.01 && salary<=3000.00) {
        pay = 0.08*(salary-2000.00);
        cout << "R$ " <<fixed<<setprecision(2)<< pay << endl;
    }
    else if (salary>=3000.01 && salary<=4500.00) {
        pay = 0.18*(salary-3000.00) + 0.08*(1000.00);
        cout << "R$ " <<fixed<<setprecision(2)<< pay << endl;
    }
    else if (salary>4500.00) {
        pay = 0.28*(salary-4500.00) + 0.18*(1500.00) + 0.08*(1000.00);
        cout << "R$ " <<fixed<<setprecision(2)<< pay << endl;
    }


    return 0;
}
