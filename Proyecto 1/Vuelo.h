//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_VUELO_H
#define PROYECTO_1_VUELO_H

#include <string>
#include <iostream>
#include <utility>
#include "Aeronave.h"

class vuelo {  ///Clase Vuelo
public:     ///Atributos clase vuelo

    std::string Origenvuelo;
    std::string Destinovuelo;
    int aeronaveAsignada;
    int ID;

    vuelo() {}

    void Crearvuelo(int id, std::string Ori, std::string Dest){
        this->ID = id;
        this->Origenvuelo = Ori;
        this->Destinovuelo = Dest;///Constructor
    }

    void setAeronave(int aero){
        this->aeronaveAsignada = aero;
    }

    void mostrarvuelo(){                  ///Metodo mostrar vuelo
        std::cout << "ID vuelo: " << this->ID << "\n";
        std::cout << "Origen De vuelo: " << this->Origenvuelo << "\n";
        std::cout << "Destino De vuelo: " << this->Destinovuelo << "\n";
        std::cout << "Aeronave asignada: \n";
        std::cout << "   ID aeronave: " << this->aeronaveAsignada << "\n";
    }

    void mostrarvuelo2(){                  ///Metodo mostrar vuelo
        std::cout << "   ID vuelo: " << this->ID << "\n";
        std::cout << "   Origen De vuelo: " << this->Origenvuelo << "\n";
        std::cout << "   Destino De vuelo: " << this->Destinovuelo << "\n";
    }
};


#endif //PROYECTO_1_VUELO_H
