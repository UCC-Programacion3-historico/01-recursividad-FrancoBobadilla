#include <iostream>
#include "digitos.h"
using namespace std;
int main() {
    cout << "Ejercicio 01/05\n" << endl;
    escribir_espaciado(0);
    cout<<endl;
    escribir_espaciado(100001);
    cout<<endl;
    escribir_espaciado(502180);
    cout<<endl;
    cout<<endl;
    cout << cociente(0,0)<<"  " << resto(0,0) << endl;
    cout << cociente(0,1)<<"  " << resto(0,1) << endl;
    cout << cociente(1,0)<<"  " << resto(1,0) << endl;
    cout << cociente(1,1)<<"  " << resto(1,1) << endl;
    cout << cociente(10,4)<<"  " << resto(10,4) << endl;
    cout << cociente(25,5)<<"  " << resto(25,5) << endl;
    cout << cociente(17,3)<<"  " << resto(17,3) << endl;
    cout << cociente(14,17)<<"  " << resto(14,17) << endl;
    return 0;
}