
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
