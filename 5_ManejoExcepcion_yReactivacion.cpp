#include<iostream>
#include<stdexcept>

void lanzaExcepcion() {
    throw std::runtime_error("Error en la función lanzaExcepción");
}

int main(){
    try{
        try{
            lanzaExcepcion();
        }
        catch (const std::runtime_error& e){
            std::cout<<"Excepcion capturada y manejada. Reactivando..."<< std::endl;
        }
    }
    catch(const std::runtime_error& e){
        std::cout<<"Excepción reactivada y capturada:"<<e.what()<<std::endl;
    }

    return 0;
}