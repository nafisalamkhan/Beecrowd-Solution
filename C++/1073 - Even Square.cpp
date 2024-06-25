#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int N, x;
    cin >> N;

    if (N > 5 && N < 2000){
        for(int i = 1; i<=N; i++){
            if(i%2==0){
                x = pow(i,2);
                cout<< i <<"^2 = "<< x << endl;
                }
        }
    }

    return 0;
}
