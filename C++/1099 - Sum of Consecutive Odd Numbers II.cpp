#include <iostream>

using namespace std;

int main() {

  int n, a, b;
   cin >> n;
   int sum[n];
   for ( int i=0; i<n; i++){
       cin >> a >> b;
       if (a>b){
           int temp = a;
           a=b;
           b=temp;
       }
       sum[i]=0;
       for ( int j = a+1; j<b; j++){
           if(j%2!=0){
               sum[i] += j;
           }
       }
   }
   for( int i=0; i<n; i++) {
       cout << sum[i] <<endl;
   }

    return 0;
}
