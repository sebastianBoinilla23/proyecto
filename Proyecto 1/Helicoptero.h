//
// Created by dilea on 9/10/2023.
//

#ifndef PROYECTO_1_HELICOPTERO_H
#define PROYECTO_1_HELICOPTERO_H

#include "Aeronave.h"

class helicoptero : public aeronave {
public:
    std::string CantidadRotores;
    std::string CapacidadElevacion;
    std::string TipoUso;

    helicoptero() {
        this->CantidadRotores = "";
        this->CapacidadElevacion = "";
        this->TipoUso = "";
    }

    void agregarhelicoptero(int id, std::string RegistroMarca, std::string ModeloA,
                            int CapPasajeros, std::string VelocidadMax, std::string Autonomia,
                            std::string AnioFabricacion, std::string CantidadRotores, std::string CapacidadElevacion, std::string TipoUso) {
        this->agregaraero(id, RegistroMarca, ModeloA, CapPasajeros, VelocidadMax, Autonomia, AnioFabricacion);
        this->CantidadRotores = CantidadRotores;
        this->CapacidadElevacion = CapacidadElevacion;
        this->TipoUso = TipoUso;
    }

    void mostrarhelicoptero() {
        this->mostraraero();
        std::cout << "CANTIDAD DE ROTORES: " << this->CantidadRotores << "\n";
        std::cout << "CAPACIDAD DE ELEVACION: " << this->CapacidadElevacion << "\n";
        std::cout << "TIPO DE USO: " << this->TipoUso << "\n";
    }
};

#endif //PROYECTO_1_HELICOPTERO_H
