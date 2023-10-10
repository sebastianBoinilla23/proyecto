//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_AERONAVE_H
#define PROYECTO_1_AERONAVE_H

#include <string>
#include <iostream>
#include "Vuelo.h"

class aeronave {                                        ///clase aeronave

public:
    int IDaeronave;
    std::string RegistroMarca;
    std::string ModeloA;
    int CapPasajeros;
    std::string VelocidadMax;
    std::string Autonomia;
    std::string AnioFabricacion;
    std::string Estado = "Disponible";
    std::vector<vuelo> vuelosAsignados;

    aeronave() {                                 ///constructor
        this->RegistroMarca = "";
        this->ModeloA = "";
        this->CapPasajeros = 0;
        this->VelocidadMax = "";
        this->Autonomia = "";
        this->AnioFabricacion = "";
    }
    aeronave(aeronave* aeronave1) {                                 ///constructor
        this->RegistroMarca = aeronave1->RegistroMarca;
        this->ModeloA = aeronave1->ModeloA;
        this->CapPasajeros = aeronave1->CapPasajeros;
        this->VelocidadMax = aeronave1->VelocidadMax;
        this->Autonomia = aeronave1->Autonomia;
        this->AnioFabricacion = aeronave1->AnioFabricacion;
    }

    void asignarVuelo(vuelo vuelo){                     ///metodo de asignacion vuelo para aeronave
        this->vuelosAsignados.push_back(vuelo);
        if (this->vuelosAsignados.size() == 3)
            this->Estado = "Ocupado";

    }
    void agregaraero(int id, std::string RegistroMarca, std::string ModeloA,  ///metodo agregar aeronave
                     int CapPasajeros, std::string VelocidadMax, std::string Autonomia,
                     std::string AnioFabricacion) {
        this->IDaeronave = id;
        this->RegistroMarca = RegistroMarca;
        this->ModeloA = ModeloA;
        this->CapPasajeros = CapPasajeros;
        this->VelocidadMax = VelocidadMax;
        this->Autonomia = Autonomia;
        this->AnioFabricacion = AnioFabricacion;
    }
    void mostraraero() {                                                       ///metodo mostrar aeronave
        std::cout << "ID: " << this->IDaeronave << "\n";
        std::cout << "Marca registrada: " << this->RegistroMarca << "\n";
        std::cout << "Modelo de aeronave: " << this->ModeloA << "\n";
        std::cout << "Capacidad pasajeros: " << this->CapPasajeros << "\n";
        std::cout << "Velocidad maxima: " << this->VelocidadMax << "\n";
        std::cout << "Autonomia: " << this->Autonomia << "\n";
        std::cout << "Anio de fabricacion: " << this->AnioFabricacion << "\n";
        std::cout << "Vuelos asignados:\n";
        if (this->vuelosAsignados.size() > 0){
            for (int i = 0; i < this->vuelosAsignados.size(); ++i) {
                this->vuelosAsignados[i].mostrarvuelo2();
            }
        } else {
            std::cout << "   Sin vuelos Asignados\n";
        }
        std::cout << "Estado: " << this->Estado << "\n";
    }
};

#endif //PROYECTO_1_AERONAVE_H
