//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_PASAJERO_H
#define PROYECTO_1_PASAJERO_H

#include <string>
#include <vector>
#include <iostream>

class Pasajero {                               ///Clase Pasajero - Usuario
public:
    std::vector<Pasajero> pasajeros;
    std::string Nombre;
    std::string Apellido;
    std::string Nacionalidad;
    std::string CantidadM;
    std::string EstSalud;
    std::string Cedula;
    std::string Genero;
    std::string Direccion;
    std::string NumeroTel;
    std::string Correo;
    vuelo vueloComprado;

    Pasajero(){                              ///Constructor Pasajeros
        this -> Nombre = "";
        this -> Apellido = "";
        this -> Nacionalidad = "";
        this -> CantidadM = "";
        this -> Cedula = "";
        this -> Genero = "";
        this -> Direccion = "";
        this -> NumeroTel = "";
        this -> Correo = "";


    }

    void AgregarPasajero (std::string Nombre, std::string Apellido, std::string Nacionalidad, std::string CantidadM, std::string EstSalud, std::string Cedula, std::string Genero,std::string Direccion,std::string NumeroTel,std::string Correo){
        this ->Nombre = Nombre;
        this ->Apellido = Apellido;
        this ->Nacionalidad = Nacionalidad;             ///Metodo Agregar Pasajeros
        this ->CantidadM = CantidadM;
        this ->Cedula = Cedula;
        this ->Genero = Genero;
        this ->Direccion = Direccion;
        this ->NumeroTel = NumeroTel;
        this ->Correo = Correo;


    }

    void comprarVuelo(vuelo vuelo1){
        this->vueloComprado = vuelo1;
    }

    void MostrarPasajero(){                               ///Metodo Mostrar Pasajeros
        std::cout << "Nombre: " << this->Nombre << "\n";
        std::cout << "Apellido: " << this->Apellido << "\n";
        std::cout << "Nacionalidad: " << this->Nacionalidad << "\n";
        std::cout << "Cantidad maletas: " << this->CantidadM << "\n";
        std::cout << "Estado de salud: " << this->EstSalud << "\n";
        std::cout << "Cedula: " << this->Cedula << "\n";
        std::cout << "Genero: " << this->Genero << "\n";
        std::cout << "Direccion de vivienda: " << this->Direccion << "\n";
        std::cout << "Numero telefonico: " << this->NumeroTel << "\n";
        std::cout << "Correo: " << this->Correo << "\n";
        std::cout << "Vuelo comprado:\n";
        this->vueloComprado.mostrarvuelo2();
    }

};

#endif //PROYECTO_1_PASAJERO_H
