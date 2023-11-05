#include <iostream>
#include <exception>
#include <string>

class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};
class ErrorDeDivisionPorCero : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "Ocurrio un error al dividir por cero.";
    }
};
int dividir(int a, int b) {
    if (b==0) {
        throw ErrorDeDivisionPorCero();
    }
    return a / b;
}
void lanzaExcepcion() {
    throw MiExcepcion("Ocurrio un error en la funcion lanzaExcepcion");
}
int main() {
    try {
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        std::cout << "Excepcion capturada: " << e.what() << std::endl;
    }
    try {
        dividir(10, 0);
    } catch (const ErrorDeDivisionPorCero &e) {
        std::cout << "Error capturado: " << e.what() << std::endl;
    }
    return 0;
}