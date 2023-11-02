
#include <iostream>
#include <stdexcept>
using namespace std;

void lanza_excepcion(){
    throw runtime_error("error en la funcion lanza excepcion");

}
int main() {
    try {
        lanza_excepcion();
    }
    catch (runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}
//excepciones no integradas con la funcion lanza excepcion
//para lanzar una excepcion emplearemos la palabra throw
//y para capturarla usamos la palabra catch y el tipo de excepcion a capturar
//ademas de un try