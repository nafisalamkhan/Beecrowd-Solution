#include <iostream>
using namespace std;

int main() {
    int pass = 2002;
    int input;
    while(true){
        cin >> input;
        if(input == pass){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha Invalida" << endl;
    }

    return 0;
}
