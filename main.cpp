#include <iostream>
using namespace std;
int main(){
    int x,y,sum;
    char znak;
    begin:
    cout << "Vvedite deystvie(+,-,*,/): ";
    cin >> znak;
    cout << endl;
    cout << "Vvedite pervoe chislo: ";
    cin >> x;
    cout << endl;
    cout << "Vvedite vtoroe chislo: ";
    cin >> y;
    cout << endl;
    if (znak=='+'){
                   sum=x+y;
                   cout << "Otvet: " << sum << endl;
                   goto begin;
                   }
    else if (znak=='-'){
                   sum=x-y;
                   cout << "Otvet: " << sum << endl;
                   goto begin;
                   }
    else if (znak=='*'){
                   sum=x*y;
                   cout << "Otvet: " << sum << endl;
                   goto begin;
                   }
    else if (znak=='/'){
                   sum=x/y;
                   cout << "Otvet: " << sum << endl;
                   goto begin;
                   }
}
