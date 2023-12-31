#include <iostream>
#include <stdexcept>
#include <fstream>

void escribeEnArchivo(std::ofstream& file){
    if(!file.is_open()){
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    file<<"Hola Mundo";
}
int main() {
    std::ofstream file("archivo.txt");
    try{
        file.close();
        escribeEnArchivo(file);
    }
    catch (const std::runtime_error& e){
        std::cout<<"excepcion capturada:"<<e.what()<<std::endl;

    }
    if (file.is_open()){
        file.close();
    }
    return 0;
}
