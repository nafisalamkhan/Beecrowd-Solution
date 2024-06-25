#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salary, newSalary, moneyEarned;
    cin >> salary;

    if (salary >= 0 && salary <= 400){
        newSalary = (salary * 15) / 100 + salary;
        moneyEarned = (salary * 15) / 100;
        cout << "Novo salario: "  << fixed << setprecision(2) << newSalary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarned << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    if (salary >= 400.01 && salary <= 800){
        newSalary = (salary * 12) / 100 + salary;
        moneyEarned = (salary * 12) / 100;
        cout << "Novo salario: "  << fixed << setprecision(2) << newSalary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarned << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    if (salary >= 800.01 && salary <= 1200){
        newSalary = (salary * 10) / 100 + salary;
        moneyEarned = (salary * 10) / 100;
        cout << "Novo salario: "  << fixed << setprecision(2) << newSalary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarned << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    if (salary >= 1200.01 && salary <= 2000){
        newSalary = (salary * 7) / 100 + salary;
        moneyEarned = (salary * 7) / 100;
        cout << "Novo salario: "  << fixed << setprecision(2) << newSalary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarned << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    if (salary > 2000){
        newSalary = (salary * 4) / 100 + salary;
        moneyEarned = (salary * 4) / 100;
        cout << "Novo salario: "  << fixed << setprecision(2) << newSalary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarned << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
