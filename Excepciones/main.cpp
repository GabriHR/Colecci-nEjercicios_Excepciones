#include <iostream>
#include <stdexcept>
void func3(){
    throw std::runtime_error("Error en fun3");
}
void func2(){
    func3();
}
void func1(){
    func2();
}
int main() {
    try{
        func1();
    }
    catch(const std::runtime_error& e){
        std::cout <<"excepcion capturada en main: "<<e.what()<<std::endl;
    }


    return 0;

}
