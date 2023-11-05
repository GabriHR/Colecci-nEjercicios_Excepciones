

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
