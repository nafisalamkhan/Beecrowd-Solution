#include <iostream>
#include<iomanip>

using namespace std;

int main() {

   int n, rabbit=0, rat=0, frog=0, total=0;
   float pc, pr, ps;
   cin >> n;
   int x;
   char ch;
   for(int i=0; i<n; i++){
       cin >> x >> ch;
       total= total+x;
       if(ch=='C'){
           rabbit=rabbit+x;
       }
       if(ch=='R'){
           rat=rat+x;
       }
       if(ch=='S'){
           frog=frog+x;
       }

   }
   pc= ((1.0)*rabbit/total)*100;
   pr= ((1.0)*rat/total)*100;
   ps= ((1.0)*frog/total)*100;

   cout << "Total: " << total << " cobaias" <<endl;
   cout << "Total de coelhos: " << rabbit <<endl;
   cout << "Total de ratos: " << rat <<endl;
   cout << "Total de sapos: " << frog <<endl;

   cout << "Percentual de coelhos: " << fixed << setprecision(2) << pc << " %" <<endl;
   cout << "Percentual de ratos: " << fixed << setprecision(2) << pr << " %" <<endl;
   cout << "Percentual de sapos: " << fixed << setprecision(2) << ps << " %" <<endl;

    return 0;
}
