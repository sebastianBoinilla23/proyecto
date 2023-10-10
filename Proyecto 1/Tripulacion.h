//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_TRIPULACION_H
#define PROYECTO_1_TRIPULACION_H

#include <vector>
#include <string>
#include "Pasajero.h"

class tripulacion : public Pasajero{
public:
    std::string puesto;
    std::string AniosExp;
    std::string HorasTotalesD;

    tripulacion(){
        this -> puesto = "";
        this -> AniosExp = "";
        this -> HorasTotalesD = "";
    }
    void agregartripulacion(std::string Nombre, std::string Apellido, std::string Nacionalidad, std::string CantidadM, std::string EstSalud, std::string Cedula, std::string Genero, std::string Direccion, std::string NumeroTel, std::string Correo, std::string puesto, std::string AniosExp, std::string HorasTotalesD) {
        this->AgregarPasajero(Nombre, Apellido, Nacionalidad, CantidadM, EstSalud, Cedula, Genero, Direccion, NumeroTel, Correo);
        this->puesto = puesto;
        this->AniosExp = AniosExp;
        this->HorasTotalesD = HorasTotalesD;
    }
    void mostrartripulacion(){
        this ->MostrarPasajero();
        std::cout << "Puesto: " << this->puesto << "\n";
        std::cout << "Anios de exp: " << this->AniosExp << "\n";
        std::cout << "Horas totales diarias: " << this->HorasTotalesD << "\n";

    }



};

#endif //PROYECTO_1_TRIPULACION_H
