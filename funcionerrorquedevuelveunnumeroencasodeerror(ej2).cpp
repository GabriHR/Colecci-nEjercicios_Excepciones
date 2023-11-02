
//para esta funcion emplearemos el codigo usado en funcionerror.cpp solo que en este caso
//la funcion no devolvera error: division entre cero
//sino que devolvera un numero en caso de error
//para ello emplearemos la funcion isnan() que devuelve un valor booleano
//en caso de que el numero sea un nan
//y en caso de que no sea un nan devolvera el resultado de la division
//en caso de que sea un nan devolvera un numero en caso de error
//en este caso devolvera 1.0
//la funcion isnan() se encuentra en la libreria cmath
//para emplearla debemos incluir la libreria cmath
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
double division(double x, double y){
    if (y==0.0)
    return 1.0; //devuelve 1.0 para indicar un error
    return x/y;
}
int main(){
    double x;
    double y;
    cout<<"ingrese su numero: ";cin >>  x;
    cout<<"ingrese el segundo numero";cin>> y;
double resultado= division(x,y);
if (y==0.0) {
    cout << "1" << endl;
}
return 1;
}
