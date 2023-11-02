#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

//version de la funcion que devuelve un valor de error en este caso la funcion de la division entre cero
double division(double x, double y){
    if (y==0.0)
    return 0.0; //devuelve 0.0 para indicar un error
    return x/y;
}
int main(){
    double x;
    double y;
    cout<<"ingrese su numero: ";cin >>  x;
    cout<<"ingrese el segundo numero"
    ;cin>> y;
double resultado= division(x,y);
if (y==0.0) {
    cout<<"error: division entre cero"<<endl;
    return 1;
}
cout<<"el resultado es "<<resultado<<endl;
return 0;
}
//version de la funcion que devuelve un valor de error en este caso la funcion de la division entre cero
  



