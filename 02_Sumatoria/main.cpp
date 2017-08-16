#include <iostream>
#include "sumatoria.h"
using namespace std;
int main() {
    cout << "Ejercicio 01/02\n" << endl;
    int arr[]={0,0,0,0,0,0};
    cout<<sumatoria(arr,6)<<endl;
    int arr1[]={0,1,2,3,4,5};
    cout<<sumatoria(arr1,6)<<endl;
    int arr2[]={100,100};
    cout<<sumatoria(arr2,2)<<endl;
    return 0;
}